#include   "ViewerWidget.h"
using namespace std;
ViewerWidget::ViewerWidget(QSize imgSize, QWidget* parent)
	: QWidget(parent)
{
	setAttribute(Qt::WA_StaticContents);
	setMouseTracking(true);
	if (imgSize != QSize(0, 0)) { //если нету размера 
		img = new QImage(imgSize, QImage::Format_ARGB32); //создаем изображение с заданным размером и форматом
		img->fill(Qt::white);
		resizeWidget(img->size());
		setDataPtr();
	}
}
ViewerWidget::~ViewerWidget()
{
	delete img;
	img = nullptr;
	data = nullptr;
}
void ViewerWidget::resizeWidget(QSize size)
{
	this->resize(size);
	this->setMinimumSize(size);
	this->setMaximumSize(size);
}

//Image functions
bool ViewerWidget::setImage(const QImage& inputImg)
{
	if (img) {
		delete img;
		img = nullptr;
		data = nullptr;
	}
	img = new QImage(inputImg.convertToFormat(QImage::Format_ARGB32));
	if (!img || img->isNull()) {
		return false;
	}
	resizeWidget(img->size());
	setDataPtr();
	update();

	return true;
}
bool ViewerWidget::isEmpty()
{
	if (img == nullptr) {
		return true;
	}

	if (img->size() == QSize(0, 0)) {
		return true;
	}
	return false;
}

bool ViewerWidget::changeSize(int width, int height)
{
	QSize newSize(width, height);

	if (newSize != QSize(0, 0)) {
		if (img != nullptr) {
			delete img;
		}

		img = new QImage(newSize, QImage::Format_ARGB32);
		if (!img || img->isNull()) {
			return false;
		}
		img->fill(Qt::white);
		resizeWidget(img->size());
		setDataPtr();
		update();
	}

	return true;
}

void ViewerWidget::setPixel(int x, int y, int r, int g, int b, int a)
{
	if (!img || !data) return;
	if (!isInside(x, y)) return;

	r = r > 255 ? 255 : (r < 0 ? 0 : r);
	g = g > 255 ? 255 : (g < 0 ? 0 : g);
	b = b > 255 ? 255 : (b < 0 ? 0 : b);
	a = a > 255 ? 255 : (a < 0 ? 0 : a);

	//то что внизу это очень нужно и упрощает все
	size_t startbyte = y * img->bytesPerLine() + x * 4;//starbyte - индекс первого байта пикселя в массиве data, который соответствует координатам (x, y). img->bytesPerLine() - количество байт в одной строке изображения. x * 4 - смещение для доступа к нужному пикселю, так как каждый пиксель занимает 4 байта (ARGB).
	data[startbyte] = static_cast<uchar>(b);
	data[startbyte + 1] = static_cast<uchar>(g);
	data[startbyte + 2] = static_cast<uchar>(r);
	data[startbyte + 3] = static_cast<uchar>(a);
}
void ViewerWidget::setPixel(int x, int y, double valR, double valG, double valB, double valA)
{
	valR = valR > 1 ? 1 : (valR < 0 ? 0 : valR);
	valG = valG > 1 ? 1 : (valG < 0 ? 0 : valG);
	valB = valB > 1 ? 1 : (valB < 0 ? 0 : valB);
	valA = valA > 1 ? 1 : (valA < 0 ? 0 : valA);

	setPixel(x, y, static_cast<int>(255 * valR + 0.5), static_cast<int>(255 * valG + 0.5), static_cast<int>(255 * valB + 0.5), static_cast<int>(255 * valA + 0.5));
}
void ViewerWidget::setPixel(int x, int y, const QColor& color)
{
	if (color.isValid()) {
		setPixel(x, y, color.red(), color.green(), color.blue(), color.alpha());
	}
}

bool ViewerWidget::isInside(int x, int y)
{
	return img && x >= 0 && y >= 0 && x < img->width() && y < img->height();
}

//Draw functions
void ViewerWidget::drawLine(QPoint start, QPoint end, QColor color, float radius, int algType)
{
	if (!img || !data) return;

	if (algType == 0) {
		drawLineDDA(start, end, color);
	}
	else if(algType == 1){
		drawLineBresenham(start, end, color);
	}
	else if (algType == 2){
		drawCircle(start, radius, color);
	}
	update();

	//Po implementovani drawLineDDA a drawLineBresenham treba vymazat
	/*QPainter painter(img);
	painter.setPen(QPen(color));
	painter.drawLine(start, end);
	update();*/
}

void ViewerWidget::clear()
{
	if (!img) return;
	img->fill(Qt::white);
	
	//hasObject = false;
	update();
}

void ViewerWidget::clearPolygon()
{
	polygonPoints.clear();
}

void ViewerWidget::drawLineDDA(QPoint start, QPoint end, QColor color)
{
	int x1 = start.x();
	int x2 = end.x();
	
	int y1 = start.y();
	int y2 = end.y();
	
	int dx = x2 - x1;
	int dy = y2 - y1;
	
	int steps = max(abs(dx), abs(dy));

	float x = x1;
	float y = y1;

	double xn = (double)dx / steps;
	double yn = (double)dy / steps;

	for (int i = 0; i <= steps; i++){
		setPixel(round(x), round(y), color);
		x += xn;
		y += yn;
	}
}

void ViewerWidget::drawLineBresenham(QPoint start, QPoint end, QColor color) 
{
	int x1 = start.x();
	int x2 = end.x();

	int y1 = start.y();
	int y2 = end.y();

	int dy = abs(y2 - y1);
	int dx = abs(x2 - x1);

	int sx = (x1 < x2) ? 1 : -1;
	int sy = (y1 < y2) ? 1 : -1;

	bool isSwap = false;
	if (dy > dx) {
		swap(dx, dy);
		isSwap = true;
	}

	int k1 = 2 * dy;
	int p = 2 * (dy - dx);
	int k2 = 2 * dy - 2 * dx;

	int x = x1;
	int y = y1;

	for (int i = 0; i <= dx; i++) {
		setPixel(x, y, color);

		if (p > 0) {
			if (isSwap) x += sx;
			else y += sy;
			p += k2;
		}
		else {
			p += k1;
		}
		if(isSwap) y += sy;
		else x += sx;
	}
	//update();
}

void ViewerWidget::drawCircle(QPoint center, float radius, QColor color) 
{
	int x0 = center.x();
	int y0 = center.y();

	float p1 = 1 - radius;
	
	int x = 0;
	int y = radius;

	int dvaX = 3;
	float dvaY = 2 * radius - 2;

	while (x <= y) {
		setPixel(x0 + x, y0 + y, color);
		setPixel(x0 + x, y0 - y, color);
		setPixel(x0 - x, y0 + y, color);
		setPixel(x0 - x, y0 - y, color);
		setPixel(x0 + y, y0 + x, color);
		setPixel(x0 + y, y0 - x, color);
		setPixel(x0 - y, y0 + x, color);
		setPixel(x0 - y, y0 - x, color);
		
		if (p1 > 0) {
			p1 = p1 - dvaY;
			y--;
			dvaY -= 2;
		}
		p1 = p1 + dvaX;
		dvaX += 2;
		x++;
	}
	//update();
}

void ViewerWidget::addPolygonPoints(QPoint p)
{
	polygonPoints.push_back(p);
}

QVector <QPoint>& ViewerWidget::getPolygonPoints()
{
	return polygonPoints;
}


void ViewerWidget::rotateAll(int angleDegre, QColor color, int algType)
{
	if (backupPoints.size() < 2) {
		return;
	}
	QPoint S = backupPoints[0]; //центр вращения - всегда первая точка
	double alpha = angleDegre * M_PI / 180.0; //угол в радианах

	QVector<QPoint> rotated;

	//for (int i = 0; i < backupPoints.size(); ++i) {
	//	int x = backupPoints[i].x();
	//	int y = backupPoints[i].y();
	for (const auto& P : backupPoints) {
		int newX = static_cast<int>(round(P.x() - S.x()) * cos(alpha) - (P.y() - S.y()) * sin(alpha) + S.x());
		int newY = static_cast<int>(round(P.x() - S.x()) * sin(alpha) + (P.y() - S.y()) * cos(alpha) + S.y());
		rotated.push_back(QPoint(newX, newY));
	}

	polygonPoints = rotated; //обновляем текущие точки повернутыми

	img->fill(Qt::white); //очищаем изображение перед отрисовкой

	if (algType == 2) { // Если в списке выбран Circle
		if (polygonPoints.size() >= 2) {
			// Считаем радиус между повернутым центром и повернутой второй точкой
			float r = sqrt(pow(rotated[1].x() - rotated[0].x(), 2) + pow(rotated[1].y() - rotated[0].y(), 2));
			drawCircle(rotated[0], r, color);
		}
	}
	else { // Если DDA или Bresenham
		for (int i = 0; i < rotated.size() - 1; ++i) {
			drawLine(rotated[i], rotated[i + 1], color, 0, algType);
		}
		// Если это был полигон (больше 2 точек) и он замкнут
		if (hasObject && rotated.size() > 2) {
			drawLine(rotated.back(), rotated.front(), color, 0, algType);
		}
	}
	update();
}

void ViewerWidget::scaleAll(double sx, double sy, QColor color, int algType)
{
	if (backupPoints.size() < 2) return;

	QPoint S = backupPoints[0];
	QVector<QPoint> scaled;

	for (const auto& P : backupPoints) {
		int newX = static_cast<int>(round(S.x() + sx * (P.x() - S.x())));
		int newY = static_cast<int>(round(S.y() + sy * (P.y() - S.y())));
		scaled.push_back(QPoint(newX, newY));

	}

	polygonPoints = scaled;
	img->fill(Qt::white);

	if (algType == 2) {
		float r = sqrt(pow(polygonPoints[1].x() - polygonPoints[0].x(), 2) + pow(polygonPoints[1].y() - polygonPoints[0].y(), 2));
		drawCircle(polygonPoints[0], r, color);
	}
	else {
		for (int i = 0; i < polygonPoints.size() - 1; ++i) {
			drawLine(polygonPoints[i], polygonPoints[i + 1], color, 0, algType);
		}
		if (hasObject && polygonPoints.size() > 2) {
			drawLine(polygonPoints.last(), polygonPoints.first(), color, 0, algType);
		}
	}
	update();
}

void ViewerWidget::reflectByX(QColor color, int algType)
{
	if (backupPoints.size() < 2) return;

	QPoint S = backupPoints[0];
	QVector<QPoint> reflected;

	for (const auto& P : backupPoints) {
		int newX = P.x();
		int newY = static_cast<int>(round(2 * S.y() - P.y()));
		reflected.push_back(QPoint(newX, newY));
	}

	backupPoints = reflected;
	polygonPoints = reflected;

	img->fill(Qt::white);
	drawCurrentObject(color, algType);
	update();
}

void ViewerWidget::reflectByY(QColor color, int algType)
{
	if (backupPoints.size() < 2) return;

	QPoint S = backupPoints[0];
	QVector<QPoint> reflected;

	for (const auto& P : backupPoints) {
		int newX = 2 * S.x() - P.x();
		int newY = P.y();
		reflected.push_back(QPoint(newX, newY));
	}

	backupPoints = reflected;
	polygonPoints = reflected;

	img->fill(Qt::white);
	drawCurrentObject(color, algType);
	update();
}

void ViewerWidget::drawCurrentObject(QColor color, int algType)
{
	if (polygonPoints.size() < 2) return;

	if (algType == 2) { // Circle
		float r = sqrt(pow(polygonPoints[1].x() - polygonPoints[0].x(), 2) +
			pow(polygonPoints[1].y() - polygonPoints[0].y(), 2));
		drawCircle(polygonPoints[0], r, color);
	}
	else {
		for (int i = 0; i < polygonPoints.size() - 1; ++i) {
			drawLine(polygonPoints[i], polygonPoints[i + 1], color, 0, algType);
		}
		if (hasObject && polygonPoints.size() > 2) {
			drawLine(polygonPoints.last(), polygonPoints.first(), color, 0, algType);
		}
	}
}

void ViewerWidget::shearX(double k, QColor color, int algType)
{
	if (backupPoints.isEmpty() || backupPoints.size() < 2) return;

	QPoint S = backupPoints[0];
	QVector<QPoint> sheared;

	for (const auto& P : backupPoints) {
		int newX = static_cast<int>(round((P.x() - S.x()) + k * (P.y() - S.y()) + S.x()));
		int newY = P.y();
		sheared.push_back(QPoint(newX, newY));
	}
	polygonPoints = sheared;
	img->fill(Qt::white);
	drawCurrentObject(color, algType);
	update();
}

double dot(QPoint a, QPoint b) {
	return a.x() * b.x() + a.y() * b.y();
}

QPoint ViewerWidget::getIntersection(QPoint S, QPoint V, int edge, int limit)
{
	double t;
	if (edge == 0 || edge == 1) { // Левая/Правая границы
		t = (double)(limit - S.x()) / (V.x() - S.x());
		return QPoint(limit, S.y() + t * (V.y() - S.y()));
	}
	else { // Верхняя/Нижняя границы
		t = (double)(limit - S.y()) / (V.y() - S.y());
		return QPoint(S.x() + t * (V.x() - S.x()), limit);
	}
}

void ViewerWidget::clipLineCyrusBeck(int xMin, int yMin, int xMax, int yMax, int algType, QColor color)
{
	if (polygonPoints.size() != 2) return;

	QPoint P1 = polygonPoints[0];
	QPoint P2 = polygonPoints[1];
	QPoint D = P2 - P1;

	double tMin = 0.0;
	double tMax = 1.0;

	QPoint n[4] = { QPoint(1,0), QPoint(-1,0), QPoint(0,1), QPoint(0,-1) };
	QPoint b[4] = { QPoint(xMax, yMin), QPoint(xMin, yMin), QPoint(xMin, yMax), QPoint(xMin, yMin)};

	for (int i = 0; i < 4; i++) {
		double dn = dot(D, n[i]);
		double wn = dot(P1 - b[i], n[i]);

		if (dn != 0){
			double t = -wn / dn;
			if(dn > 0){
				tMin = max(tMin, t);
			}
			else {
				tMax = min(tMax, t);
			}
		}
		else if (wn < 0) {
			return;
		}
	}
	if(tMin <= tMax){
		polygonPoints[0] = QPoint(P1.x() + tMin * D.x(), P1.y() + tMin * D.y());
		polygonPoints[1] = QPoint(P1.x() + tMax * D.x(), P1.y() + tMax * D.y());
		img->fill(Qt::white);
		drawCurrentObject(color, algType);
	}
	else {
		img->fill(Qt::white);
	}
	update();
}

void ViewerWidget::clipPolygonSH(int xMin, int yMin, int xMax, int yMax, int algType, QColor color)
{
	if (polygonPoints.size() < 3) return;

	QVector<QPoint> input = polygonPoints;
	int limits[4] = { xMin, xMax, yMin, yMax };

	for (int edge = 0; edge < 4; edge++){
		QVector<QPoint> output;
		if (input.isEmpty()) break;
		QPoint S = input.last();

		for (const QPoint& V : input) {
			bool vIn, sIn;
			// Проверка "внутри" ли точки относительно текущей границы (edge)
			if (edge == 0) { vIn = V.x() >= limits[0]; sIn = S.x() >= limits[0]; }
			else if (edge == 1) { vIn = V.x() <= limits[1]; sIn = S.x() <= limits[1]; }
			else if (edge == 2) { vIn = V.y() >= limits[2]; sIn = S.y() >= limits[2]; }
			else { vIn = V.y() <= limits[3]; sIn = S.y() <= limits[3]; }

			if (vIn) {
				if (!sIn) output.push_back(getIntersection(S, V, edge, limits[edge]));
				output.push_back(V);
			}
			else if (sIn) {
				output.push_back(getIntersection(S, V, edge, limits[edge]));
			}
			S = V;
		}
		input = output;
	}
	polygonPoints = input;
	img->fill(Qt::white);
	drawCurrentObject(color, algType);
	update();
}


//Slots
void ViewerWidget::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);
	if (!img || img->isNull()) return;

	QRect area = event->rect();
	painter.drawImage(area, *img, area);
}