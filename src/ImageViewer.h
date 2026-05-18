#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets>
#include "ui_ImageViewer.h"
#include "ViewerWidget.h"

class ImageViewer : public QMainWindow
{
	Q_OBJECT

public:
	ImageViewer(QWidget* parent = Q_NULLPTR);
	~ImageViewer() { delete ui; }
private:
	Ui::ImageViewerClass* ui;
	ViewerWidget* vW;

	QColor globalColor;
	QSettings settings;
	QMessageBox msgBox;

	//Event filters
	bool eventFilter(QObject* obj, QEvent* event);

	//ViewerWidget Events
	bool ViewerWidgetEventFilter(QObject* obj, QEvent* event);
	void ViewerWidgetMouseButtonPress(ViewerWidget* w, QEvent* event);
	void ViewerWidgetMouseButtonRelease(ViewerWidget* w, QEvent* event);
	void ViewerWidgetMouseMove(ViewerWidget* w, QEvent* event);
	void ViewerWidgetLeave(ViewerWidget* w, QEvent* event);
	void ViewerWidgetEnter(ViewerWidget* w, QEvent* event);
	void ViewerWidgetWheel(ViewerWidget* w, QEvent* event);

	//ImageViewer Events
	void closeEvent(QCloseEvent* event);

	//Image functions
	bool openImage(QString filename);
	bool saveImage(QString filename);

private slots:
	void on_actionOpen_triggered();
	void on_actionSave_as_triggered();
	void on_actionClear_triggered();
	void on_actionExit_triggered();

	//Tools slots
	void on_pushButtonSetColor_clicked();
	void on_spinBoxRotation_valueChanged(int value);
	void on_pushButtonApplyScale_clicked();
	void on_pushButtonReflectX_clicked();
	void on_pushButtonReflectY_clicked();
	void on_pushButtonShear_clicked();

	void on_pushButtonCube_clicked();
	void on_pushButtonSphere_clicked();


	void on_verticalSliderZenit_valueChanged(int value);
	void on_verticalSliderAzimut_valueChanged(int value);
	void on_verticalSliderDis_valueChanged(int value);

	void on_radioButtonOr_toggled(bool checked);
	void on_radioButtonPer_toggled(bool checked);

	void on_comboBox_currentIndexChanged(int index);

	void on_SpinBoxX_valueChanged(int val);
	void on_SpinBoxY_valueChanged(int val);
	void on_SpinBoxZ_valueChanged(int val);

	void on_spinBoxLR_valueChanged(int val);
	void on_spinBoxLG_valueChanged(int val);
	void on_spinBoxLB_valueChanged(int val);

	void on_spinBoxAR_valueChanged(int val);
	void on_spinBoxAG_valueChanged(int val);
	void on_spinBoxAB_valueChanged(int val);

	void on_doubleSpinBoxR1_valueChanged(double val);
	void on_doubleSpinBoxG1_valueChanged(double val);
	void on_doubleSpinBoxB1_valueChanged(double val);

	void on_doubleSpinBoxR2_valueChanged(double val);
	void on_doubleSpinBoxG2_valueChanged(double val);
	void on_doubleSpinBoxB2_valueChanged(double val);

	void on_doubleSpinBoxR3_valueChanged(double val);
	void on_doubleSpinBoxG3_valueChanged(double val);
	void on_doubleSpinBoxB3_valueChanged(double val);

	void on_doubleSpinBoxDISTANCE_valueChanged(double val);
};
