/****************************************************************************
** Meta object code from reading C++ file 'ImageViewer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ImageViewer.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN11ImageViewerE_t {};
} // unnamed namespace

template <> constexpr inline auto ImageViewer::qt_create_metaobjectdata<qt_meta_tag_ZN11ImageViewerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ImageViewer",
        "on_actionOpen_triggered",
        "",
        "on_actionSave_as_triggered",
        "on_actionClear_triggered",
        "on_actionExit_triggered",
        "on_pushButtonSetColor_clicked",
        "on_spinBoxRotation_valueChanged",
        "value",
        "on_pushButtonApplyScale_clicked",
        "on_pushButtonReflectX_clicked",
        "on_pushButtonReflectY_clicked",
        "on_pushButtonShear_clicked",
        "on_pushButtonCube_clicked",
        "on_pushButtonSphere_clicked",
        "on_verticalSliderZenit_valueChanged",
        "on_verticalSliderAzimut_valueChanged",
        "on_verticalSliderDis_valueChanged",
        "on_radioButtonOr_toggled",
        "checked",
        "on_radioButtonPer_toggled",
        "on_comboBox_currentIndexChanged",
        "index",
        "on_SpinBoxX_valueChanged",
        "val",
        "on_SpinBoxY_valueChanged",
        "on_SpinBoxZ_valueChanged",
        "on_spinBoxLR_valueChanged",
        "on_spinBoxLG_valueChanged",
        "on_spinBoxLB_valueChanged",
        "on_spinBoxAR_valueChanged",
        "on_spinBoxAG_valueChanged",
        "on_spinBoxAB_valueChanged",
        "on_doubleSpinBoxR1_valueChanged",
        "on_doubleSpinBoxG1_valueChanged",
        "on_doubleSpinBoxB1_valueChanged",
        "on_doubleSpinBoxR2_valueChanged",
        "on_doubleSpinBoxG2_valueChanged",
        "on_doubleSpinBoxB2_valueChanged",
        "on_doubleSpinBoxR3_valueChanged",
        "on_doubleSpinBoxG3_valueChanged",
        "on_doubleSpinBoxB3_valueChanged",
        "on_doubleSpinBoxDISTANCE_valueChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_actionOpen_triggered'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSave_as_triggered'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionClear_triggered'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExit_triggered'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSetColor_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_spinBoxRotation_valueChanged'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'on_pushButtonApplyScale_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonReflectX_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonReflectY_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonShear_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonCube_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSphere_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_verticalSliderZenit_valueChanged'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'on_verticalSliderAzimut_valueChanged'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'on_verticalSliderDis_valueChanged'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'on_radioButtonOr_toggled'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'on_radioButtonPer_toggled'
        QtMocHelpers::SlotData<void(bool)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'on_comboBox_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'on_SpinBoxX_valueChanged'
        QtMocHelpers::SlotData<void(int)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Slot 'on_SpinBoxY_valueChanged'
        QtMocHelpers::SlotData<void(int)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Slot 'on_SpinBoxZ_valueChanged'
        QtMocHelpers::SlotData<void(int)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Slot 'on_spinBoxLR_valueChanged'
        QtMocHelpers::SlotData<void(int)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Slot 'on_spinBoxLG_valueChanged'
        QtMocHelpers::SlotData<void(int)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Slot 'on_spinBoxLB_valueChanged'
        QtMocHelpers::SlotData<void(int)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Slot 'on_spinBoxAR_valueChanged'
        QtMocHelpers::SlotData<void(int)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Slot 'on_spinBoxAG_valueChanged'
        QtMocHelpers::SlotData<void(int)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Slot 'on_spinBoxAB_valueChanged'
        QtMocHelpers::SlotData<void(int)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Slot 'on_doubleSpinBoxR1_valueChanged'
        QtMocHelpers::SlotData<void(double)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 24 },
        }}),
        // Slot 'on_doubleSpinBoxG1_valueChanged'
        QtMocHelpers::SlotData<void(double)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 24 },
        }}),
        // Slot 'on_doubleSpinBoxB1_valueChanged'
        QtMocHelpers::SlotData<void(double)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 24 },
        }}),
        // Slot 'on_doubleSpinBoxR2_valueChanged'
        QtMocHelpers::SlotData<void(double)>(36, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 24 },
        }}),
        // Slot 'on_doubleSpinBoxG2_valueChanged'
        QtMocHelpers::SlotData<void(double)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 24 },
        }}),
        // Slot 'on_doubleSpinBoxB2_valueChanged'
        QtMocHelpers::SlotData<void(double)>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 24 },
        }}),
        // Slot 'on_doubleSpinBoxR3_valueChanged'
        QtMocHelpers::SlotData<void(double)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 24 },
        }}),
        // Slot 'on_doubleSpinBoxG3_valueChanged'
        QtMocHelpers::SlotData<void(double)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 24 },
        }}),
        // Slot 'on_doubleSpinBoxB3_valueChanged'
        QtMocHelpers::SlotData<void(double)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 24 },
        }}),
        // Slot 'on_doubleSpinBoxDISTANCE_valueChanged'
        QtMocHelpers::SlotData<void(double)>(42, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 24 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ImageViewer, qt_meta_tag_ZN11ImageViewerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ImageViewer::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ImageViewerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ImageViewerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11ImageViewerE_t>.metaTypes,
    nullptr
} };

void ImageViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ImageViewer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_actionOpen_triggered(); break;
        case 1: _t->on_actionSave_as_triggered(); break;
        case 2: _t->on_actionClear_triggered(); break;
        case 3: _t->on_actionExit_triggered(); break;
        case 4: _t->on_pushButtonSetColor_clicked(); break;
        case 5: _t->on_spinBoxRotation_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_pushButtonApplyScale_clicked(); break;
        case 7: _t->on_pushButtonReflectX_clicked(); break;
        case 8: _t->on_pushButtonReflectY_clicked(); break;
        case 9: _t->on_pushButtonShear_clicked(); break;
        case 10: _t->on_pushButtonCube_clicked(); break;
        case 11: _t->on_pushButtonSphere_clicked(); break;
        case 12: _t->on_verticalSliderZenit_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_verticalSliderAzimut_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_verticalSliderDis_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->on_radioButtonOr_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->on_radioButtonPer_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->on_comboBox_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_SpinBoxX_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->on_SpinBoxY_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->on_SpinBoxZ_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->on_spinBoxLR_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->on_spinBoxLG_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->on_spinBoxLB_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->on_spinBoxAR_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->on_spinBoxAG_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->on_spinBoxAB_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->on_doubleSpinBoxR1_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 28: _t->on_doubleSpinBoxG1_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 29: _t->on_doubleSpinBoxB1_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 30: _t->on_doubleSpinBoxR2_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 31: _t->on_doubleSpinBoxG2_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 32: _t->on_doubleSpinBoxB2_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 33: _t->on_doubleSpinBoxR3_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 34: _t->on_doubleSpinBoxG3_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 35: _t->on_doubleSpinBoxB3_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 36: _t->on_doubleSpinBoxDISTANCE_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ImageViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ImageViewerE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ImageViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 37;
    }
    return _id;
}
QT_WARNING_POP
