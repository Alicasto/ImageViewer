/********************************************************************************
** Form generated from reading UI file 'ImageViewer.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEVIEWER_H
#define UI_IMAGEVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageViewerClass
{
public:
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionClear;
    QAction *actionExit;
    QAction *actionResize;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_9;
    QLabel *label_24;
    QDoubleSpinBox *doubleSpinBoxDISTANCE;
    QDoubleSpinBox *doubleSpinBoxR2;
    QDoubleSpinBox *doubleSpinBoxB2;
    QDoubleSpinBox *doubleSpinBoxG2;
    QLabel *label_19;
    QDoubleSpinBox *doubleSpinBoxR3;
    QDoubleSpinBox *doubleSpinBoxR1;
    QLabel *label_17;
    QDoubleSpinBox *doubleSpinBoxB3;
    QDoubleSpinBox *doubleSpinBoxG3;
    QDoubleSpinBox *doubleSpinBoxG1;
    QLabel *label_18;
    QLabel *label_16;
    QLabel *label_23;
    QLabel *label_20;
    QLabel *label_22;
    QLabel *label_21;
    QDoubleSpinBox *doubleSpinBoxB1;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_8;
    QRadioButton *radioButtonOR;
    QRadioButton *radioButtonPER;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_7;
    QDoubleSpinBox *SpinBoxZ;
    QSpinBox *spinBoxAG;
    QDoubleSpinBox *SpinBoxX;
    QLabel *label_10;
    QSpinBox *spinBoxLB;
    QSpinBox *spinBoxLG;
    QDoubleSpinBox *SpinBoxY;
    QSpinBox *spinBoxLR;
    QLabel *label;
    QLabel *label_3;
    QSpinBox *spinBoxAB;
    QLabel *label_13;
    QLabel *label_2;
    QLabel *label_11;
    QLabel *label_8;
    QLabel *label_12;
    QLabel *label_9;
    QSpinBox *spinBoxAR;
    QPushButton *pushButtonDraw;
    QComboBox *comboBox;
    QLabel *label_4;
    QLabel *label_14;
    QLabel *label_15;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuImage;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QSlider *verticalSliderDis;
    QLabel *label_7;
    QSlider *verticalSliderAzimut;
    QLabel *label_6;
    QLabel *label_5;
    QSlider *verticalSliderZenit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButtonClip;
    QLineEdit *lineEditC;
    QPushButton *buttonRotate;
    QToolButton *toolButtonDrawLine;
    QPushButton *pushButtonKrivka;
    QPushButton *pushButtonReflectX;
    QSpinBox *spinBoxRotation;
    QDoubleSpinBox *doubleSpinBoxShear;
    QPushButton *pushButtonFill;
    QPushButton *pushButtonCube;
    QDoubleSpinBox *doubleSpinBoxX;
    QPushButton *pushButtonReflectY;
    QComboBox *comboBoxInterpolation;
    QToolButton *toolButtonPolygon;
    QComboBox *comboBoxLineAlg;
    QDoubleSpinBox *doubleSpinBoxY;
    QComboBox *comboBoxKrivky;
    QPushButton *pushButtonApplyScale;
    QPushButton *pushButtonSphere;
    QPushButton *pushButtonShear;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButtonSetColor;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *ImageViewerClass)
    {
        if (ImageViewerClass->objectName().isEmpty())
            ImageViewerClass->setObjectName("ImageViewerClass");
        ImageViewerClass->resize(1110, 758);
        actionOpen = new QAction(ImageViewerClass);
        actionOpen->setObjectName("actionOpen");
        actionSave_as = new QAction(ImageViewerClass);
        actionSave_as->setObjectName("actionSave_as");
        actionClear = new QAction(ImageViewerClass);
        actionClear->setObjectName("actionClear");
        actionExit = new QAction(ImageViewerClass);
        actionExit->setObjectName("actionExit");
        actionResize = new QAction(ImageViewerClass);
        actionResize->setObjectName("actionResize");
        centralWidget = new QWidget(ImageViewerClass);
        centralWidget->setObjectName("centralWidget");
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 785, 463));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName("groupBox_5");
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName("gridLayout_6");
        groupBox_7 = new QGroupBox(groupBox_5);
        groupBox_7->setObjectName("groupBox_7");
        gridLayout_9 = new QGridLayout(groupBox_7);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName("gridLayout_9");
        label_24 = new QLabel(groupBox_7);
        label_24->setObjectName("label_24");

        gridLayout_9->addWidget(label_24, 3, 5, 1, 1);

        doubleSpinBoxDISTANCE = new QDoubleSpinBox(groupBox_7);
        doubleSpinBoxDISTANCE->setObjectName("doubleSpinBoxDISTANCE");

        gridLayout_9->addWidget(doubleSpinBoxDISTANCE, 3, 6, 1, 1);

        doubleSpinBoxR2 = new QDoubleSpinBox(groupBox_7);
        doubleSpinBoxR2->setObjectName("doubleSpinBoxR2");
        doubleSpinBoxR2->setMaximum(1.000000000000000);

        gridLayout_9->addWidget(doubleSpinBoxR2, 3, 2, 1, 1);

        doubleSpinBoxB2 = new QDoubleSpinBox(groupBox_7);
        doubleSpinBoxB2->setObjectName("doubleSpinBoxB2");
        doubleSpinBoxB2->setMaximum(1.000000000000000);

        gridLayout_9->addWidget(doubleSpinBoxB2, 3, 4, 1, 1);

        doubleSpinBoxG2 = new QDoubleSpinBox(groupBox_7);
        doubleSpinBoxG2->setObjectName("doubleSpinBoxG2");
        doubleSpinBoxG2->setMaximum(1.000000000000000);

        gridLayout_9->addWidget(doubleSpinBoxG2, 3, 3, 1, 1);

        label_19 = new QLabel(groupBox_7);
        label_19->setObjectName("label_19");

        gridLayout_9->addWidget(label_19, 1, 4, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        doubleSpinBoxR3 = new QDoubleSpinBox(groupBox_7);
        doubleSpinBoxR3->setObjectName("doubleSpinBoxR3");
        doubleSpinBoxR3->setMaximum(1.000000000000000);

        gridLayout_9->addWidget(doubleSpinBoxR3, 4, 2, 1, 1);

        doubleSpinBoxR1 = new QDoubleSpinBox(groupBox_7);
        doubleSpinBoxR1->setObjectName("doubleSpinBoxR1");
        doubleSpinBoxR1->setMaximum(1.000000000000000);

        gridLayout_9->addWidget(doubleSpinBoxR1, 2, 2, 1, 1);

        label_17 = new QLabel(groupBox_7);
        label_17->setObjectName("label_17");

        gridLayout_9->addWidget(label_17, 1, 2, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        doubleSpinBoxB3 = new QDoubleSpinBox(groupBox_7);
        doubleSpinBoxB3->setObjectName("doubleSpinBoxB3");
        doubleSpinBoxB3->setMaximum(1.000000000000000);

        gridLayout_9->addWidget(doubleSpinBoxB3, 4, 4, 1, 1);

        doubleSpinBoxG3 = new QDoubleSpinBox(groupBox_7);
        doubleSpinBoxG3->setObjectName("doubleSpinBoxG3");
        doubleSpinBoxG3->setMaximum(1.000000000000000);

        gridLayout_9->addWidget(doubleSpinBoxG3, 4, 3, 1, 1);

        doubleSpinBoxG1 = new QDoubleSpinBox(groupBox_7);
        doubleSpinBoxG1->setObjectName("doubleSpinBoxG1");
        doubleSpinBoxG1->setMaximum(1.000000000000000);

        gridLayout_9->addWidget(doubleSpinBoxG1, 2, 3, 1, 1);

        label_18 = new QLabel(groupBox_7);
        label_18->setObjectName("label_18");

        gridLayout_9->addWidget(label_18, 1, 3, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        label_16 = new QLabel(groupBox_7);
        label_16->setObjectName("label_16");

        gridLayout_9->addWidget(label_16, 1, 0, 1, 2);

        label_23 = new QLabel(groupBox_7);
        label_23->setObjectName("label_23");

        gridLayout_9->addWidget(label_23, 1, 5, 1, 2);

        label_20 = new QLabel(groupBox_7);
        label_20->setObjectName("label_20");

        gridLayout_9->addWidget(label_20, 2, 0, 1, 2);

        label_22 = new QLabel(groupBox_7);
        label_22->setObjectName("label_22");

        gridLayout_9->addWidget(label_22, 4, 0, 1, 1);

        label_21 = new QLabel(groupBox_7);
        label_21->setObjectName("label_21");

        gridLayout_9->addWidget(label_21, 3, 0, 1, 1);

        doubleSpinBoxB1 = new QDoubleSpinBox(groupBox_7);
        doubleSpinBoxB1->setObjectName("doubleSpinBoxB1");
        doubleSpinBoxB1->setMaximum(1.000000000000000);

        gridLayout_9->addWidget(doubleSpinBoxB1, 2, 4, 1, 1);


        gridLayout_6->addWidget(groupBox_7, 0, 2, 1, 1);

        groupBox_6 = new QGroupBox(groupBox_5);
        groupBox_6->setObjectName("groupBox_6");
        gridLayout_8 = new QGridLayout(groupBox_6);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName("gridLayout_8");
        radioButtonOR = new QRadioButton(groupBox_6);
        radioButtonOR->setObjectName("radioButtonOR");
        radioButtonOR->setChecked(true);

        gridLayout_8->addWidget(radioButtonOR, 0, 0, 1, 1);

        radioButtonPER = new QRadioButton(groupBox_6);
        radioButtonPER->setObjectName("radioButtonPER");

        gridLayout_8->addWidget(radioButtonPER, 1, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_6, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox_5);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_7 = new QGridLayout(groupBox_3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName("gridLayout_7");
        SpinBoxZ = new QDoubleSpinBox(groupBox_3);
        SpinBoxZ->setObjectName("SpinBoxZ");
        SpinBoxZ->setMinimum(-5000.000000000000000);
        SpinBoxZ->setMaximum(5000.000000000000000);
        SpinBoxZ->setValue(1000.000000000000000);

        gridLayout_7->addWidget(SpinBoxZ, 4, 1, 1, 1);

        spinBoxAG = new QSpinBox(groupBox_3);
        spinBoxAG->setObjectName("spinBoxAG");
        spinBoxAG->setMaximum(255);
        spinBoxAG->setValue(200);

        gridLayout_7->addWidget(spinBoxAG, 3, 5, 1, 1);

        SpinBoxX = new QDoubleSpinBox(groupBox_3);
        SpinBoxX->setObjectName("SpinBoxX");
        SpinBoxX->setMinimum(-5000.000000000000000);
        SpinBoxX->setMaximum(5000.000000000000000);

        gridLayout_7->addWidget(SpinBoxX, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");

        gridLayout_7->addWidget(label_10, 4, 2, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        spinBoxLB = new QSpinBox(groupBox_3);
        spinBoxLB->setObjectName("spinBoxLB");
        spinBoxLB->setMaximum(255);
        spinBoxLB->setValue(255);

        gridLayout_7->addWidget(spinBoxLB, 4, 3, 1, 1);

        spinBoxLG = new QSpinBox(groupBox_3);
        spinBoxLG->setObjectName("spinBoxLG");
        spinBoxLG->setMaximum(255);
        spinBoxLG->setValue(255);

        gridLayout_7->addWidget(spinBoxLG, 3, 3, 1, 1);

        SpinBoxY = new QDoubleSpinBox(groupBox_3);
        SpinBoxY->setObjectName("SpinBoxY");
        SpinBoxY->setMinimum(-5000.000000000000000);
        SpinBoxY->setMaximum(5000.000000000000000);

        gridLayout_7->addWidget(SpinBoxY, 3, 1, 1, 1);

        spinBoxLR = new QSpinBox(groupBox_3);
        spinBoxLR->setObjectName("spinBoxLR");
        spinBoxLR->setMaximum(255);
        spinBoxLR->setValue(255);

        gridLayout_7->addWidget(spinBoxLR, 2, 3, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName("label");

        gridLayout_7->addWidget(label, 2, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");

        gridLayout_7->addWidget(label_3, 4, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        spinBoxAB = new QSpinBox(groupBox_3);
        spinBoxAB->setObjectName("spinBoxAB");
        spinBoxAB->setMaximum(255);
        spinBoxAB->setValue(200);

        gridLayout_7->addWidget(spinBoxAB, 4, 5, 1, 1);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName("label_13");

        gridLayout_7->addWidget(label_13, 4, 4, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName("label_2");

        gridLayout_7->addWidget(label_2, 3, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");

        gridLayout_7->addWidget(label_11, 2, 4, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");

        gridLayout_7->addWidget(label_8, 2, 2, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName("label_12");

        gridLayout_7->addWidget(label_12, 3, 4, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName("label_9");

        gridLayout_7->addWidget(label_9, 3, 2, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        spinBoxAR = new QSpinBox(groupBox_3);
        spinBoxAR->setObjectName("spinBoxAR");
        spinBoxAR->setMaximum(255);
        spinBoxAR->setValue(200);

        gridLayout_7->addWidget(spinBoxAR, 2, 5, 1, 1);

        pushButtonDraw = new QPushButton(groupBox_3);
        pushButtonDraw->setObjectName("pushButtonDraw");

        gridLayout_7->addWidget(pushButtonDraw, 0, 3, 1, 1);

        comboBox = new QComboBox(groupBox_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        gridLayout_7->addWidget(comboBox, 0, 0, 1, 2);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");

        gridLayout_7->addWidget(label_4, 1, 0, 1, 2);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName("label_14");

        gridLayout_7->addWidget(label_14, 1, 2, 1, 2);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName("label_15");

        gridLayout_7->addWidget(label_15, 1, 4, 1, 2);


        gridLayout_6->addWidget(groupBox_3, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_5, 1, 0, 1, 1);

        ImageViewerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageViewerClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1110, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuImage = new QMenu(menuBar);
        menuImage->setObjectName("menuImage");
        ImageViewerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImageViewerClass);
        mainToolBar->setObjectName("mainToolBar");
        ImageViewerClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImageViewerClass);
        statusBar->setObjectName("statusBar");
        ImageViewerClass->setStatusBar(statusBar);
        dockWidget = new QDockWidget(ImageViewerClass);
        dockWidget->setObjectName("dockWidget");
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox_4 = new QGroupBox(dockWidgetContents);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName("gridLayout_5");
        verticalSliderDis = new QSlider(groupBox_4);
        verticalSliderDis->setObjectName("verticalSliderDis");
        verticalSliderDis->setMaximum(800);
        verticalSliderDis->setOrientation(Qt::Orientation::Vertical);

        gridLayout_5->addWidget(verticalSliderDis, 1, 7, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName("label_7");

        gridLayout_5->addWidget(label_7, 0, 7, 1, 1);

        verticalSliderAzimut = new QSlider(groupBox_4);
        verticalSliderAzimut->setObjectName("verticalSliderAzimut");
        verticalSliderAzimut->setMaximum(360);
        verticalSliderAzimut->setOrientation(Qt::Orientation::Vertical);

        gridLayout_5->addWidget(verticalSliderAzimut, 1, 5, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");

        gridLayout_5->addWidget(label_6, 0, 5, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName("label_5");

        gridLayout_5->addWidget(label_5, 0, 3, 1, 1);

        verticalSliderZenit = new QSlider(groupBox_4);
        verticalSliderZenit->setObjectName("verticalSliderZenit");
        verticalSliderZenit->setMaximum(180);
        verticalSliderZenit->setOrientation(Qt::Orientation::Vertical);

        gridLayout_5->addWidget(verticalSliderZenit, 1, 3, 1, 1);


        gridLayout_2->addWidget(groupBox_4, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(dockWidgetContents);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName("gridLayout_4");
        pushButtonClip = new QPushButton(groupBox_2);
        pushButtonClip->setObjectName("pushButtonClip");
        pushButtonClip->setCheckable(true);

        gridLayout_4->addWidget(pushButtonClip, 6, 0, 1, 1);

        lineEditC = new QLineEdit(groupBox_2);
        lineEditC->setObjectName("lineEditC");

        gridLayout_4->addWidget(lineEditC, 9, 1, 1, 1);

        buttonRotate = new QPushButton(groupBox_2);
        buttonRotate->setObjectName("buttonRotate");
        buttonRotate->setCheckable(true);

        gridLayout_4->addWidget(buttonRotate, 2, 0, 1, 1);

        toolButtonDrawLine = new QToolButton(groupBox_2);
        buttonGroup = new QButtonGroup(ImageViewerClass);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(toolButtonDrawLine);
        toolButtonDrawLine->setObjectName("toolButtonDrawLine");
        toolButtonDrawLine->setCheckable(true);

        gridLayout_4->addWidget(toolButtonDrawLine, 1, 0, 1, 1);

        pushButtonKrivka = new QPushButton(groupBox_2);
        pushButtonKrivka->setObjectName("pushButtonKrivka");
        pushButtonKrivka->setCheckable(true);

        gridLayout_4->addWidget(pushButtonKrivka, 8, 0, 1, 1);

        pushButtonReflectX = new QPushButton(groupBox_2);
        pushButtonReflectX->setObjectName("pushButtonReflectX");

        gridLayout_4->addWidget(pushButtonReflectX, 4, 0, 1, 1);

        spinBoxRotation = new QSpinBox(groupBox_2);
        spinBoxRotation->setObjectName("spinBoxRotation");

        gridLayout_4->addWidget(spinBoxRotation, 2, 1, 1, 1);

        doubleSpinBoxShear = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxShear->setObjectName("doubleSpinBoxShear");

        gridLayout_4->addWidget(doubleSpinBoxShear, 5, 1, 1, 1);

        pushButtonFill = new QPushButton(groupBox_2);
        pushButtonFill->setObjectName("pushButtonFill");
        pushButtonFill->setCheckable(true);

        gridLayout_4->addWidget(pushButtonFill, 6, 1, 1, 1);

        pushButtonCube = new QPushButton(groupBox_2);
        pushButtonCube->setObjectName("pushButtonCube");

        gridLayout_4->addWidget(pushButtonCube, 9, 0, 1, 1);

        doubleSpinBoxX = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxX->setObjectName("doubleSpinBoxX");
        doubleSpinBoxX->setMinimum(0.010000000000000);
        doubleSpinBoxX->setMaximum(10.000000000000000);
        doubleSpinBoxX->setValue(1.000000000000000);

        gridLayout_4->addWidget(doubleSpinBoxX, 3, 1, 1, 1);

        pushButtonReflectY = new QPushButton(groupBox_2);
        pushButtonReflectY->setObjectName("pushButtonReflectY");

        gridLayout_4->addWidget(pushButtonReflectY, 4, 1, 1, 1);

        comboBoxInterpolation = new QComboBox(groupBox_2);
        comboBoxInterpolation->addItem(QString());
        comboBoxInterpolation->addItem(QString());
        comboBoxInterpolation->setObjectName("comboBoxInterpolation");

        gridLayout_4->addWidget(comboBoxInterpolation, 7, 0, 1, 3);

        toolButtonPolygon = new QToolButton(groupBox_2);
        buttonGroup->addButton(toolButtonPolygon);
        toolButtonPolygon->setObjectName("toolButtonPolygon");
        toolButtonPolygon->setCheckable(true);

        gridLayout_4->addWidget(toolButtonPolygon, 1, 1, 1, 3);

        comboBoxLineAlg = new QComboBox(groupBox_2);
        comboBoxLineAlg->addItem(QString());
        comboBoxLineAlg->addItem(QString());
        comboBoxLineAlg->addItem(QString());
        comboBoxLineAlg->setObjectName("comboBoxLineAlg");

        gridLayout_4->addWidget(comboBoxLineAlg, 0, 0, 1, 3);

        doubleSpinBoxY = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxY->setObjectName("doubleSpinBoxY");
        doubleSpinBoxY->setMinimum(0.010000000000000);
        doubleSpinBoxY->setMaximum(10.000000000000000);
        doubleSpinBoxY->setValue(1.000000000000000);

        gridLayout_4->addWidget(doubleSpinBoxY, 3, 2, 1, 1);

        comboBoxKrivky = new QComboBox(groupBox_2);
        comboBoxKrivky->addItem(QString());
        comboBoxKrivky->addItem(QString());
        comboBoxKrivky->addItem(QString());
        comboBoxKrivky->setObjectName("comboBoxKrivky");
        comboBoxKrivky->setEnabled(true);

        gridLayout_4->addWidget(comboBoxKrivky, 8, 1, 1, 2);

        pushButtonApplyScale = new QPushButton(groupBox_2);
        pushButtonApplyScale->setObjectName("pushButtonApplyScale");
        pushButtonApplyScale->setCheckable(false);

        gridLayout_4->addWidget(pushButtonApplyScale, 3, 0, 1, 1);

        pushButtonSphere = new QPushButton(groupBox_2);
        pushButtonSphere->setObjectName("pushButtonSphere");

        gridLayout_4->addWidget(pushButtonSphere, 9, 2, 1, 1);

        pushButtonShear = new QPushButton(groupBox_2);
        pushButtonShear->setObjectName("pushButtonShear");
        pushButtonShear->setCheckable(false);

        gridLayout_4->addWidget(pushButtonShear, 5, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        pushButtonSetColor = new QPushButton(groupBox);
        pushButtonSetColor->setObjectName("pushButtonSetColor");

        gridLayout->addWidget(pushButtonSetColor, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents);
        ImageViewerClass->addDockWidget(Qt::DockWidgetArea::LeftDockWidgetArea, dockWidget);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuImage->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuImage->addAction(actionClear);

        retranslateUi(ImageViewerClass);

        QMetaObject::connectSlotsByName(ImageViewerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImageViewerClass)
    {
        ImageViewerClass->setWindowTitle(QCoreApplication::translate("ImageViewerClass", "ImageViewer", nullptr));
        actionOpen->setText(QCoreApplication::translate("ImageViewerClass", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("ImageViewerClass", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("ImageViewerClass", "Save as", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("ImageViewerClass", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClear->setText(QCoreApplication::translate("ImageViewerClass", "Clear", nullptr));
        actionExit->setText(QCoreApplication::translate("ImageViewerClass", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("ImageViewerClass", "Alt+F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionResize->setText(QCoreApplication::translate("ImageViewerClass", "Resize", nullptr));
        groupBox_5->setTitle(QString());
        groupBox_7->setTitle(QCoreApplication::translate("ImageViewerClass", "Material Properties", nullptr));
        label_24->setText(QCoreApplication::translate("ImageViewerClass", "Distance", nullptr));
        label_19->setText(QCoreApplication::translate("ImageViewerClass", "B", nullptr));
        label_17->setText(QCoreApplication::translate("ImageViewerClass", "R", nullptr));
        label_18->setText(QCoreApplication::translate("ImageViewerClass", "G", nullptr));
        label_16->setText(QCoreApplication::translate("ImageViewerClass", "Pom Coeficients", nullptr));
        label_23->setText(QCoreApplication::translate("ImageViewerClass", "Observer", nullptr));
        label_20->setText(QCoreApplication::translate("ImageViewerClass", "difusion", nullptr));
        label_22->setText(QCoreApplication::translate("ImageViewerClass", "ambient", nullptr));
        label_21->setText(QCoreApplication::translate("ImageViewerClass", "reflection", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("ImageViewerClass", "Projection", nullptr));
        radioButtonOR->setText(QCoreApplication::translate("ImageViewerClass", "Orthographic", nullptr));
        radioButtonPER->setText(QCoreApplication::translate("ImageViewerClass", "Perspective", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ImageViewerClass", "Shading and Light", nullptr));
        label_10->setText(QCoreApplication::translate("ImageViewerClass", "B", nullptr));
        label->setText(QCoreApplication::translate("ImageViewerClass", "X", nullptr));
        label_3->setText(QCoreApplication::translate("ImageViewerClass", "Z", nullptr));
        label_13->setText(QCoreApplication::translate("ImageViewerClass", "B", nullptr));
        label_2->setText(QCoreApplication::translate("ImageViewerClass", "Y", nullptr));
        label_11->setText(QCoreApplication::translate("ImageViewerClass", "R", nullptr));
        label_8->setText(QCoreApplication::translate("ImageViewerClass", "R", nullptr));
        label_12->setText(QCoreApplication::translate("ImageViewerClass", "G", nullptr));
        label_9->setText(QCoreApplication::translate("ImageViewerClass", "G", nullptr));
        pushButtonDraw->setText(QCoreApplication::translate("ImageViewerClass", "Draw", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ImageViewerClass", "Wireframe", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ImageViewerClass", "Nearest neighbor", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("ImageViewerClass", "Gouraud", nullptr));

        label_4->setText(QCoreApplication::translate("ImageViewerClass", "Coordinates ", nullptr));
        label_14->setText(QCoreApplication::translate("ImageViewerClass", "Light Source ", nullptr));
        label_15->setText(QCoreApplication::translate("ImageViewerClass", "Ambient Light ", nullptr));
        menuFile->setTitle(QCoreApplication::translate("ImageViewerClass", "File", nullptr));
        menuImage->setTitle(QCoreApplication::translate("ImageViewerClass", "Image", nullptr));
        dockWidget->setWindowTitle(QCoreApplication::translate("ImageViewerClass", "Tools", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ImageViewerClass", "Camera", nullptr));
        label_7->setText(QCoreApplication::translate("ImageViewerClass", "Distance", nullptr));
        label_6->setText(QCoreApplication::translate("ImageViewerClass", "Azimut", nullptr));
        label_5->setText(QCoreApplication::translate("ImageViewerClass", "Zenit", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ImageViewerClass", "Draw", nullptr));
        pushButtonClip->setText(QCoreApplication::translate("ImageViewerClass", "Clip", nullptr));
        buttonRotate->setText(QCoreApplication::translate("ImageViewerClass", "Rotate", nullptr));
        toolButtonDrawLine->setText(QCoreApplication::translate("ImageViewerClass", "Line", nullptr));
        pushButtonKrivka->setText(QCoreApplication::translate("ImageViewerClass", "Curve", nullptr));
        pushButtonReflectX->setText(QCoreApplication::translate("ImageViewerClass", "Reflect X", nullptr));
        pushButtonFill->setText(QCoreApplication::translate("ImageViewerClass", "Fill", nullptr));
        pushButtonCube->setText(QCoreApplication::translate("ImageViewerClass", "Cube", nullptr));
        pushButtonReflectY->setText(QCoreApplication::translate("ImageViewerClass", "Reflect Y", nullptr));
        comboBoxInterpolation->setItemText(0, QCoreApplication::translate("ImageViewerClass", "Nearest Neighbor", nullptr));
        comboBoxInterpolation->setItemText(1, QCoreApplication::translate("ImageViewerClass", "Barycentric", nullptr));

        toolButtonPolygon->setText(QCoreApplication::translate("ImageViewerClass", "Polygon", nullptr));
        comboBoxLineAlg->setItemText(0, QCoreApplication::translate("ImageViewerClass", "DDA", nullptr));
        comboBoxLineAlg->setItemText(1, QCoreApplication::translate("ImageViewerClass", "Bresenham", nullptr));
        comboBoxLineAlg->setItemText(2, QCoreApplication::translate("ImageViewerClass", "Circle", nullptr));

        comboBoxKrivky->setItemText(0, QCoreApplication::translate("ImageViewerClass", "Ferguson", nullptr));
        comboBoxKrivky->setItemText(1, QCoreApplication::translate("ImageViewerClass", "Bezier", nullptr));
        comboBoxKrivky->setItemText(2, QCoreApplication::translate("ImageViewerClass", "Coons B Spline", nullptr));

        pushButtonApplyScale->setText(QCoreApplication::translate("ImageViewerClass", "Scale", nullptr));
        pushButtonSphere->setText(QCoreApplication::translate("ImageViewerClass", "Sphere", nullptr));
        pushButtonShear->setText(QCoreApplication::translate("ImageViewerClass", "Shear X", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ImageViewerClass", "Color", nullptr));
        pushButtonSetColor->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImageViewerClass: public Ui_ImageViewerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEVIEWER_H
