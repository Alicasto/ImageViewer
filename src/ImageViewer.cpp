#include "ImageViewer.h"

ImageViewer::ImageViewer(QWidget* parent)
	: QMainWindow(parent), ui(new Ui::ImageViewerClass)
{
	ui->setupUi(this);
	vW = new ViewerWidget(QSize(500, 500), ui->scrollArea);
	ui->scrollArea->setWidget(vW);

	ui->scrollArea->setBackgroundRole(QPalette::Dark);// чтобы задняя область была темная если полотно белое
	ui->scrollArea->setWidgetResizable(false);
	ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
	ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
	vW->setObjectName("ViewerWidget");
	vW->installEventFilter(this);

	globalColor = Qt::blue;
	QString style_sheet = QString("background-color: %1;").arg(globalColor.name(QColor::HexRgb));
	ui->pushButtonSetColor->setStyleSheet(style_sheet);
}

// Event filters
bool ImageViewer::eventFilter(QObject* obj, QEvent* event)
{
	if (obj->objectName() == "ViewerWidget") {
		return ViewerWidgetEventFilter(obj, event);
	}
	return QMainWindow::eventFilter(obj, event);
}
//все что сделано в QWidget сдединое с QObject
//ViewerWidget Events
bool ImageViewer::ViewerWidgetEventFilter(QObject* obj, QEvent* event)
{
	ViewerWidget* w = static_cast<ViewerWidget*>(obj);

	if (!w) {
		return false;
	}

	if (event->type() == QEvent::MouseButtonPress) {
		ViewerWidgetMouseButtonPress(w, event);
	}
	else if (event->type() == QEvent::MouseButtonRelease) {
		ViewerWidgetMouseButtonRelease(w, event);
	}
	else if (event->type() == QEvent::MouseMove) {
		ViewerWidgetMouseMove(w, event);
	}
	else if (event->type() == QEvent::Leave) {
		ViewerWidgetLeave(w, event);
	}
	else if (event->type() == QEvent::Enter) {
		ViewerWidgetEnter(w, event);
	}
	else if (event->type() == QEvent::Wheel) {
		ViewerWidgetWheel(w, event);
	}

	return QObject::eventFilter(obj, event);
}
void ImageViewer::ViewerWidgetMouseButtonPress(ViewerWidget* w, QEvent* event)
{
	QMouseEvent* e = static_cast<QMouseEvent*>(event);
	w->lastMousePos = e->pos();//zapominajem kde shvatili object

	if (w->hasObject) {
		return;
	}
	
	int alagType = ui->comboBoxLineAlg->currentIndex();
	
	if (ui->toolButtonPolygon->isChecked()) {
		if (w->getDrawLineActivated()) return;
		
		if(e->button() == Qt::LeftButton){
			w->getPolygonPoints().push_back(e->pos());
			
			if (w->getPolygonPoints().size() > 1) {
				QPoint start = w->getPolygonPoints()[w->getPolygonPoints().size() - 2];
				QPoint end = w->getPolygonPoints().back();
				w->drawLine(start, e->pos(), globalColor, 0, alagType);
			}
			else {
				w->setPixel(e->pos().x(), e->pos().y(), globalColor);
			}
			w->update();
		}
		else if (e->button() == Qt::RightButton){
			if (w->getPolygonPoints().size() > 2) {
				w->drawLine(w->getPolygonPoints().back(), w->getPolygonPoints().front(), globalColor, 0, alagType);
				//w->getPolygonPoints().clear();
				w->hasObject = true;
				w->backupPoints = w->getPolygonPoints();

				ui->toolButtonPolygon->setChecked(false);
				w->update();
			}
		
		}
		
	}
	else if (e->button() == Qt::LeftButton && ui->toolButtonDrawLine->isChecked()) //рисуется только если кнопка зажата в уи
	{
		if (!w->getPolygonPoints().empty()) return;
		
		if (w->getDrawLineActivated()) {
			QPoint start = w->getDrawLineBegin();
			QPoint end = e->pos();
			float radius = sqrt(pow(end.x() - start.x(), 2) + pow(end.y() - start.y(), 2));//радиус линии зависит от длины отрезка
			
			w->getPolygonPoints().push_back(start); //индекс 0 - центр вращения
			w->getPolygonPoints().push_back(end); //индекс 1 - конец линии или точка радиуса

			w->drawLine(start, end, globalColor, radius, ui->comboBoxLineAlg->currentIndex());
			//w->drawLine(w->getDrawLineBegin(), e->pos(), globalColor, ui->comboBoxLineAlg->currentIndex());
			w->hasObject = true;
			w->backupPoints = w->getPolygonPoints(); //для перемещения линии
			w->setDrawLineActivated(false);

			ui->toolButtonDrawLine->setChecked(false);
			w->update();
		}
		else {
			w->setDrawLineBegin(e->pos());//pos позиция мыши 
			w->setDrawLineActivated(true);

			w->getPolygonPoints().clear();

			w->setPixel(e->pos().x(), e->pos().y(), globalColor);
			w->update();

			
		}
	}
}
void ImageViewer::ViewerWidgetMouseButtonRelease(ViewerWidget* w, QEvent* event)
{
	QMouseEvent* e = static_cast<QMouseEvent*>(event);

}
void ImageViewer::ViewerWidgetMouseMove(ViewerWidget* w, QEvent* event)
{
	QMouseEvent* e = static_cast<QMouseEvent*>(event);

	if ((e->buttons() & Qt::LeftButton) && w->hasObject) {
		
		if (w->getPolygonPoints().size() < 2) return;
		//if (w->backupPoints.isEmpty()) return;

		int dx = e->pos().x() - w->lastMousePos.x();
		int dy = e->pos().y() - w->lastMousePos.y();

		for (QPoint& p : w->getPolygonPoints()) {
			p.setX(p.x() + dx);
			p.setY(p.y() + dy);
		}
		for (QPoint& p : w->backupPoints) {
			p.setX(p.x() + dx);
			p.setY(p.y() + dy);	
		}
		w->lastMousePos = e->pos();
		w->clear();
		int algType = ui->comboBoxLineAlg->currentIndex();

		QVector<QPoint> originalPoints = w->getPolygonPoints();

		if (ui->pushButtonClip->isChecked()) {
			// Задаем границы окна (можно 50 пикселей от края или по размеру виджета)
			int margin = 20;
			int xMin = margin;
			int yMin = margin;
			int xMax = w->width() - margin;
			int yMax = w->height() - margin;

			if (originalPoints.size() == 2) {
				w->clipLineCyrusBeck(xMin, yMin, xMax, yMax, algType, globalColor);
			}
			else if (originalPoints.size() > 2) {
				w->clipPolygonSH(xMin, yMin, xMax, yMax, algType, globalColor);
			}

		}
		auto& pts = w->getPolygonPoints();
		
		if (!pts.isEmpty()) {
			if (algType == 2) { // Circle
				float r = sqrt(pow(pts[1].x() - pts[0].x(), 2) + pow(pts[1].y() - pts[0].y(), 2));
				w->drawCircle(pts[0], r, globalColor);
			}
			else { // Line / Polygon
				for (size_t i = 0; i < pts.size() - 1; ++i) {
					w->drawLine(pts[i], pts[i + 1], globalColor, 0, algType);
				}
				if (pts.size() > 2) { // Замыкаем полигон
					w->drawLine(pts.back(), pts.front(), globalColor, 0, algType);
				}
			}
		}
		w->getPolygonPoints() = originalPoints;
		w->update();

	}
}
void ImageViewer::ViewerWidgetLeave(ViewerWidget* w, QEvent* event)
{
}
void ImageViewer::ViewerWidgetEnter(ViewerWidget* w, QEvent* event)
{
}
void ImageViewer::ViewerWidgetWheel(ViewerWidget* w, QEvent* event)
{
	QWheelEvent* wheelEvent = static_cast<QWheelEvent*>(event);
	if (!w->hasObject) return;

	/*double scaleFactor = 1.0;

	if (wheelEvent->angleDelta().y() > 0) {
		scaleFactor = 1.25;
	}
	else {
		scaleFactor = 0.75;
	}*/
	static double cursorSX = 1.0;
	static double cursorSY = 1.0;
	if (wheelEvent->angleDelta().y() > 0) {
		cursorSX *= 1.25;
		cursorSY *= 1.25;
	}
	else {
		cursorSX *= 0.75;
		cursorSY *= 0.75;
	}
	w->scaleAll(cursorSX, cursorSY, globalColor, ui->comboBoxLineAlg->currentIndex());

	//w->backupPoints = w->getPolygonPoints();
}

//ImageViewer Events
void ImageViewer::closeEvent(QCloseEvent* event)
{
	if (QMessageBox::Yes == QMessageBox::question(this, "Close Confirmation", "Are you sure you want to exit?", QMessageBox::Yes | QMessageBox::No))
	{
		event->accept();
	}
	else {
		event->ignore();
	}
}

//Image functions
bool ImageViewer::openImage(QString filename)
{
	QImage loadedImg(filename);
	if (!loadedImg.isNull()) {
		return vW->setImage(loadedImg);
	}
	return false;
}
bool ImageViewer::saveImage(QString filename)
{
	QFileInfo fi(filename);
	QString extension = fi.completeSuffix();

	QImage* img = vW->getImage();
	return img->save(filename, extension.toStdString().c_str());
}

//Slots
void ImageViewer::on_actionOpen_triggered()
{
	QString folder = settings.value("folder_img_load_path", "").toString();//записывает это в regedit там папка появляется

	QString fileFilter = "Image data (*.bmp *.gif *.jpg *.jpeg *.png *.pbm *.pgm *.ppm *.xbm *.xpm);;All files (*)";
	QString fileName = QFileDialog::getOpenFileName(this, "Load image", folder, fileFilter);
	if (fileName.isEmpty()) { return; }

	QFileInfo fi(fileName);
	settings.setValue("folder_img_load_path", fi.absoluteDir().absolutePath());

	if (!openImage(fileName)) {
		msgBox.setText("Unable to open image.");
		msgBox.setIcon(QMessageBox::Warning);
		msgBox.exec();
	}
}
void ImageViewer::on_actionSave_as_triggered()
{
	QString folder = settings.value("folder_img_save_path", "").toString();

	QString fileFilter = "Image data (*.bmp *.gif *.jpg *.jpeg *.png *.pbm *.pgm *.ppm *.xbm *.xpm);;All files (*)";
	QString fileName = QFileDialog::getSaveFileName(this, "Save image", folder, fileFilter);
	if (!fileName.isEmpty()) {
		QFileInfo fi(fileName);
		settings.setValue("folder_img_save_path", fi.absoluteDir().absolutePath());

		if (!saveImage(fileName)) {
			msgBox.setText("Unable to save image.");
			msgBox.setIcon(QMessageBox::Warning);
		}
		else {
			msgBox.setText(QString("File %1 saved.").arg(fileName));
			msgBox.setIcon(QMessageBox::Information);
		}
		msgBox.exec();
	}
}
void ImageViewer::on_actionClear_triggered()
{
	vW->clear();
	vW->getPolygonPoints().clear();
	vW->setDrawLineActivated(false);
	vW->hasObject = false;
	vW->update();
}
void ImageViewer::on_actionExit_triggered()
{
	this->close();
}

void ImageViewer::on_pushButtonSetColor_clicked()
{
	QColor newColor = QColorDialog::getColor(globalColor, this);
	if (newColor.isValid()) {
		QString style_sheet = QString("background-color: %1;").arg(newColor.name(QColor::HexRgb));
		ui->pushButtonSetColor->setStyleSheet(style_sheet);
		globalColor = newColor;
	}
}

void ImageViewer::on_spinBoxRotation_valueChanged(int value)
{
	if (ui->buttonRotate->isChecked()) {

		// Если на холсте есть объект
		if (vW->hasObject || !vW->getPolygonPoints().empty()) {
			int algType = ui->comboBoxLineAlg->currentIndex();

			// Вызываем функцию вращения
			vW->rotateAll(value, globalColor, algType);
		}
	}
}

void ImageViewer::on_pushButtonApplyScale_clicked()
{
	if (!vW || !vW->hasObject) {
		return;
	}

	double sx = ui->doubleSpinBoxX->value();
	double sy = ui->doubleSpinBoxY->value();
	vW->scaleAll(sx, sy, globalColor, ui->comboBoxLineAlg->currentIndex());
	
	
}

void ImageViewer::on_pushButtonReflectX_clicked()
{
	if (vW->hasObject) {
		vW->reflectByX(globalColor, ui->comboBoxLineAlg->currentIndex());
	}
}

void ImageViewer::on_pushButtonReflectY_clicked()
{
	if (vW->hasObject) {
		vW->reflectByY(globalColor, ui->comboBoxLineAlg->currentIndex());
	}
}

void ImageViewer::on_pushButtonShear_clicked()
{
	if (vW->hasObject) {
		double k = ui->doubleSpinBoxShear->value();
		vW->shearX(k, globalColor, ui->comboBoxLineAlg->currentIndex());
	}
}
