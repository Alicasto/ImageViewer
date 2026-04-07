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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
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
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuImage;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButtonSetColor;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButtonClip;
    QComboBox *comboBoxKrivky;
    QPushButton *buttonRotate;
    QPushButton *pushButtonFill;
    QComboBox *comboBoxInterpolation;
    QToolButton *toolButtonPolygon;
    QDoubleSpinBox *doubleSpinBoxShear;
    QPushButton *pushButtonShear;
    QComboBox *comboBoxLineAlg;
    QLineEdit *lineEditC;
    QPushButton *pushButtonKrivka;
    QSpinBox *spinBoxRotation;
    QToolButton *toolButtonDrawLine;
    QDoubleSpinBox *doubleSpinBoxX;
    QPushButton *pushButtonApplyScale;
    QDoubleSpinBox *doubleSpinBoxY;
    QPushButton *pushButtonReflectX;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonCube;
    QPushButton *pushButtonReflectY;
    QPushButton *pushButtonSphere;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *ImageViewerClass)
    {
        if (ImageViewerClass->objectName().isEmpty())
            ImageViewerClass->setObjectName("ImageViewerClass");
        ImageViewerClass->resize(818, 646);
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
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 488, 566));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        ImageViewerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageViewerClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 818, 21));
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

        comboBoxKrivky = new QComboBox(groupBox_2);
        comboBoxKrivky->addItem(QString());
        comboBoxKrivky->addItem(QString());
        comboBoxKrivky->addItem(QString());
        comboBoxKrivky->setObjectName("comboBoxKrivky");
        comboBoxKrivky->setEnabled(true);

        gridLayout_4->addWidget(comboBoxKrivky, 8, 1, 1, 2);

        buttonRotate = new QPushButton(groupBox_2);
        buttonRotate->setObjectName("buttonRotate");
        buttonRotate->setCheckable(true);

        gridLayout_4->addWidget(buttonRotate, 2, 0, 1, 1);

        pushButtonFill = new QPushButton(groupBox_2);
        pushButtonFill->setObjectName("pushButtonFill");
        pushButtonFill->setCheckable(true);

        gridLayout_4->addWidget(pushButtonFill, 6, 1, 1, 1);

        comboBoxInterpolation = new QComboBox(groupBox_2);
        comboBoxInterpolation->addItem(QString());
        comboBoxInterpolation->addItem(QString());
        comboBoxInterpolation->setObjectName("comboBoxInterpolation");

        gridLayout_4->addWidget(comboBoxInterpolation, 7, 0, 1, 3);

        toolButtonPolygon = new QToolButton(groupBox_2);
        buttonGroup = new QButtonGroup(ImageViewerClass);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(toolButtonPolygon);
        toolButtonPolygon->setObjectName("toolButtonPolygon");
        toolButtonPolygon->setCheckable(true);

        gridLayout_4->addWidget(toolButtonPolygon, 1, 1, 1, 3);

        doubleSpinBoxShear = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxShear->setObjectName("doubleSpinBoxShear");

        gridLayout_4->addWidget(doubleSpinBoxShear, 5, 1, 1, 1);

        pushButtonShear = new QPushButton(groupBox_2);
        pushButtonShear->setObjectName("pushButtonShear");
        pushButtonShear->setCheckable(false);

        gridLayout_4->addWidget(pushButtonShear, 5, 0, 1, 1);

        comboBoxLineAlg = new QComboBox(groupBox_2);
        comboBoxLineAlg->addItem(QString());
        comboBoxLineAlg->addItem(QString());
        comboBoxLineAlg->addItem(QString());
        comboBoxLineAlg->setObjectName("comboBoxLineAlg");

        gridLayout_4->addWidget(comboBoxLineAlg, 0, 0, 1, 3);

        lineEditC = new QLineEdit(groupBox_2);
        lineEditC->setObjectName("lineEditC");

        gridLayout_4->addWidget(lineEditC, 9, 1, 1, 1);

        pushButtonKrivka = new QPushButton(groupBox_2);
        pushButtonKrivka->setObjectName("pushButtonKrivka");
        pushButtonKrivka->setCheckable(true);

        gridLayout_4->addWidget(pushButtonKrivka, 8, 0, 1, 1);

        spinBoxRotation = new QSpinBox(groupBox_2);
        spinBoxRotation->setObjectName("spinBoxRotation");

        gridLayout_4->addWidget(spinBoxRotation, 2, 1, 1, 1);

        toolButtonDrawLine = new QToolButton(groupBox_2);
        buttonGroup->addButton(toolButtonDrawLine);
        toolButtonDrawLine->setObjectName("toolButtonDrawLine");
        toolButtonDrawLine->setCheckable(true);

        gridLayout_4->addWidget(toolButtonDrawLine, 1, 0, 1, 1);

        doubleSpinBoxX = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxX->setObjectName("doubleSpinBoxX");
        doubleSpinBoxX->setMinimum(0.010000000000000);
        doubleSpinBoxX->setMaximum(10.000000000000000);
        doubleSpinBoxX->setValue(1.000000000000000);

        gridLayout_4->addWidget(doubleSpinBoxX, 3, 1, 1, 1);

        pushButtonApplyScale = new QPushButton(groupBox_2);
        pushButtonApplyScale->setObjectName("pushButtonApplyScale");
        pushButtonApplyScale->setCheckable(false);

        gridLayout_4->addWidget(pushButtonApplyScale, 3, 0, 1, 1);

        doubleSpinBoxY = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxY->setObjectName("doubleSpinBoxY");
        doubleSpinBoxY->setMinimum(0.010000000000000);
        doubleSpinBoxY->setMaximum(10.000000000000000);
        doubleSpinBoxY->setValue(1.000000000000000);

        gridLayout_4->addWidget(doubleSpinBoxY, 3, 2, 1, 1);

        pushButtonReflectX = new QPushButton(groupBox_2);
        pushButtonReflectX->setObjectName("pushButtonReflectX");

        gridLayout_4->addWidget(pushButtonReflectX, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 11, 0, 1, 1);

        pushButtonCube = new QPushButton(groupBox_2);
        pushButtonCube->setObjectName("pushButtonCube");

        gridLayout_4->addWidget(pushButtonCube, 9, 0, 1, 1);

        pushButtonReflectY = new QPushButton(groupBox_2);
        pushButtonReflectY->setObjectName("pushButtonReflectY");

        gridLayout_4->addWidget(pushButtonReflectY, 4, 1, 1, 1);

        pushButtonSphere = new QPushButton(groupBox_2);
        pushButtonSphere->setObjectName("pushButtonSphere");

        gridLayout_4->addWidget(pushButtonSphere, 10, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

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
        menuFile->setTitle(QCoreApplication::translate("ImageViewerClass", "File", nullptr));
        menuImage->setTitle(QCoreApplication::translate("ImageViewerClass", "Image", nullptr));
        dockWidget->setWindowTitle(QCoreApplication::translate("ImageViewerClass", "Tools", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ImageViewerClass", "Color", nullptr));
        pushButtonSetColor->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("ImageViewerClass", "Draw", nullptr));
        pushButtonClip->setText(QCoreApplication::translate("ImageViewerClass", "Clip", nullptr));
        comboBoxKrivky->setItemText(0, QCoreApplication::translate("ImageViewerClass", "Ferguson", nullptr));
        comboBoxKrivky->setItemText(1, QCoreApplication::translate("ImageViewerClass", "Bezier", nullptr));
        comboBoxKrivky->setItemText(2, QCoreApplication::translate("ImageViewerClass", "Coons B Spline", nullptr));

        buttonRotate->setText(QCoreApplication::translate("ImageViewerClass", "Rotate", nullptr));
        pushButtonFill->setText(QCoreApplication::translate("ImageViewerClass", "Fill", nullptr));
        comboBoxInterpolation->setItemText(0, QCoreApplication::translate("ImageViewerClass", "Nearest Neighbor", nullptr));
        comboBoxInterpolation->setItemText(1, QCoreApplication::translate("ImageViewerClass", "Barycentric", nullptr));

        toolButtonPolygon->setText(QCoreApplication::translate("ImageViewerClass", "Polygon", nullptr));
        pushButtonShear->setText(QCoreApplication::translate("ImageViewerClass", "Shear X", nullptr));
        comboBoxLineAlg->setItemText(0, QCoreApplication::translate("ImageViewerClass", "DDA", nullptr));
        comboBoxLineAlg->setItemText(1, QCoreApplication::translate("ImageViewerClass", "Bresenham", nullptr));
        comboBoxLineAlg->setItemText(2, QCoreApplication::translate("ImageViewerClass", "Circle", nullptr));

        pushButtonKrivka->setText(QCoreApplication::translate("ImageViewerClass", "Curve", nullptr));
        toolButtonDrawLine->setText(QCoreApplication::translate("ImageViewerClass", "Line", nullptr));
        pushButtonApplyScale->setText(QCoreApplication::translate("ImageViewerClass", "Scale", nullptr));
        pushButtonReflectX->setText(QCoreApplication::translate("ImageViewerClass", "Reflect X", nullptr));
        pushButtonCube->setText(QCoreApplication::translate("ImageViewerClass", "Cube", nullptr));
        pushButtonReflectY->setText(QCoreApplication::translate("ImageViewerClass", "Reflect Y", nullptr));
        pushButtonSphere->setText(QCoreApplication::translate("ImageViewerClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageViewerClass: public Ui_ImageViewerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEVIEWER_H
