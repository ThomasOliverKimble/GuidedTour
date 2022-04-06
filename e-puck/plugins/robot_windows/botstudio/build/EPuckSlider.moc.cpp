/****************************************************************************
** Meta object code from reading C++ file 'EPuckSlider.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../e-puck/EPuckSlider.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EPuckSlider.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EPuckSlider_t {
    const uint offsetsAndSize[22];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_EPuckSlider_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_EPuckSlider_t qt_meta_stringdata_EPuckSlider = {
    {
QT_MOC_LITERAL(0, 11), // "EPuckSlider"
QT_MOC_LITERAL(12, 12), // "valueChanged"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 12), // "handleAction"
QT_MOC_LITERAL(39, 6), // "action"
QT_MOC_LITERAL(46, 10), // "updateText"
QT_MOC_LITERAL(57, 5), // "value"
QT_MOC_LITERAL(63, 16), // "emitValueChanged"
QT_MOC_LITERAL(80, 13), // "sliderPressed"
QT_MOC_LITERAL(94, 11), // "sliderMoved"
QT_MOC_LITERAL(106, 14) // "sliderReleased"

    },
    "EPuckSlider\0valueChanged\0\0handleAction\0"
    "action\0updateText\0value\0emitValueChanged\0"
    "sliderPressed\0sliderMoved\0sliderReleased"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EPuckSlider[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   57,    2, 0x08,    2 /* Private */,
       5,    1,   60,    2, 0x08,    4 /* Private */,
       7,    1,   63,    2, 0x08,    6 /* Private */,
       8,    0,   66,    2, 0x08,    8 /* Private */,
       9,    1,   67,    2, 0x08,    9 /* Private */,
      10,    0,   70,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void EPuckSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EPuckSlider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->handleAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateText((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->emitValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sliderPressed(); break;
        case 5: _t->sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->sliderReleased(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EPuckSlider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EPuckSlider::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject EPuckSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EPuckSlider.offsetsAndSize,
    qt_meta_data_EPuckSlider,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_EPuckSlider_t
, QtPrivate::TypeAndForceComplete<EPuckSlider, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *EPuckSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EPuckSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EPuckSlider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EPuckSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void EPuckSlider::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
