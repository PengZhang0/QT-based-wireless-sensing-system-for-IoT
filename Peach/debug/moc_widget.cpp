/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[22];
    char stringdata0[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 10), // "closeEvent"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 12), // "QCloseEvent*"
QT_MOC_LITERAL(4, 32, 5), // "event"
QT_MOC_LITERAL(5, 38, 16), // "changeMboxReturn"
QT_MOC_LITERAL(6, 55, 3), // "num"
QT_MOC_LITERAL(7, 59, 26), // "on_btn_main_item_1_clicked"
QT_MOC_LITERAL(8, 86, 26), // "on_btn_main_item_2_clicked"
QT_MOC_LITERAL(9, 113, 26), // "on_btn_main_item_3_clicked"
QT_MOC_LITERAL(10, 140, 26), // "on_btn_main_item_4_clicked"
QT_MOC_LITERAL(11, 167, 21), // "on_btn_logout_clicked"
QT_MOC_LITERAL(12, 189, 25), // "on_btn_littleshow_clicked"
QT_MOC_LITERAL(13, 215, 10), // "timeUpdate"
QT_MOC_LITERAL(14, 226, 12), // "OncbxChanged"
QT_MOC_LITERAL(15, 239, 16), // "on_iot_7_clicked"
QT_MOC_LITERAL(16, 256, 16), // "on_iot_8_clicked"
QT_MOC_LITERAL(17, 273, 16), // "on_iot_1_clicked"
QT_MOC_LITERAL(18, 290, 21), // "on_btn_return_clicked"
QT_MOC_LITERAL(19, 312, 17), // "on_btn_on_clicked"
QT_MOC_LITERAL(20, 330, 18), // "on_btn_off_clicked"
QT_MOC_LITERAL(21, 349, 16) // "on_iot_2_clicked"

    },
    "Widget\0closeEvent\0\0QCloseEvent*\0event\0"
    "changeMboxReturn\0num\0on_btn_main_item_1_clicked\0"
    "on_btn_main_item_2_clicked\0"
    "on_btn_main_item_3_clicked\0"
    "on_btn_main_item_4_clicked\0"
    "on_btn_logout_clicked\0on_btn_littleshow_clicked\0"
    "timeUpdate\0OncbxChanged\0on_iot_7_clicked\0"
    "on_iot_8_clicked\0on_iot_1_clicked\0"
    "on_btn_return_clicked\0on_btn_on_clicked\0"
    "on_btn_off_clicked\0on_iot_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x08 /* Private */,
       5,    1,  102,    2, 0x08 /* Private */,
       7,    0,  105,    2, 0x08 /* Private */,
       8,    0,  106,    2, 0x08 /* Private */,
       9,    0,  107,    2, 0x08 /* Private */,
      10,    0,  108,    2, 0x08 /* Private */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    0,  110,    2, 0x08 /* Private */,
      13,    0,  111,    2, 0x08 /* Private */,
      14,    0,  112,    2, 0x08 /* Private */,
      15,    0,  113,    2, 0x08 /* Private */,
      16,    0,  114,    2, 0x08 /* Private */,
      17,    0,  115,    2, 0x08 /* Private */,
      18,    0,  116,    2, 0x08 /* Private */,
      19,    0,  117,    2, 0x08 /* Private */,
      20,    0,  118,    2, 0x08 /* Private */,
      21,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 1: _t->changeMboxReturn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_btn_main_item_1_clicked(); break;
        case 3: _t->on_btn_main_item_2_clicked(); break;
        case 4: _t->on_btn_main_item_3_clicked(); break;
        case 5: _t->on_btn_main_item_4_clicked(); break;
        case 6: _t->on_btn_logout_clicked(); break;
        case 7: _t->on_btn_littleshow_clicked(); break;
        case 8: _t->timeUpdate(); break;
        case 9: _t->OncbxChanged(); break;
        case 10: _t->on_iot_7_clicked(); break;
        case 11: _t->on_iot_8_clicked(); break;
        case 12: _t->on_iot_1_clicked(); break;
        case 13: _t->on_btn_return_clicked(); break;
        case 14: _t->on_btn_on_clicked(); break;
        case 15: _t->on_btn_off_clicked(); break;
        case 16: _t->on_iot_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
