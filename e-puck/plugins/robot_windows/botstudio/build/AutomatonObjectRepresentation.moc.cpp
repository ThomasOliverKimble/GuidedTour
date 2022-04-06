/****************************************************************************
** Meta object code from reading C++ file 'AutomatonObjectRepresentation.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../core/AutomatonObjectRepresentation.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutomatonObjectRepresentation.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutomatonObjectRepresentation_t {
    const uint offsetsAndSize[24];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_AutomatonObjectRepresentation_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_AutomatonObjectRepresentation_t qt_meta_stringdata_AutomatonObjectRepresentation = {
    {
QT_MOC_LITERAL(0, 29), // "AutomatonObjectRepresentation"
QT_MOC_LITERAL(30, 16), // "selectionChanged"
QT_MOC_LITERAL(47, 0), // ""
QT_MOC_LITERAL(48, 8), // "newValue"
QT_MOC_LITERAL(57, 15), // "positionChanged"
QT_MOC_LITERAL(73, 18), // "propagateSelection"
QT_MOC_LITERAL(92, 17), // "propagatePosition"
QT_MOC_LITERAL(110, 13), // "propagateName"
QT_MOC_LITERAL(124, 19), // "emitPositionChanged"
QT_MOC_LITERAL(144, 15), // "updateSelection"
QT_MOC_LITERAL(160, 10), // "updateName"
QT_MOC_LITERAL(171, 14) // "updatePosition"

    },
    "AutomatonObjectRepresentation\0"
    "selectionChanged\0\0newValue\0positionChanged\0"
    "propagateSelection\0propagatePosition\0"
    "propagateName\0emitPositionChanged\0"
    "updateSelection\0updateName\0updatePosition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutomatonObjectRepresentation[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       4,    0,   71,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   72,    2, 0x0a,    4 /* Public */,
       6,    0,   75,    2, 0x0a,    6 /* Public */,
       7,    0,   76,    2, 0x0a,    7 /* Public */,
       8,    0,   77,    2, 0x0a,    8 /* Public */,
       9,    0,   78,    2, 0x0a,    9 /* Public */,
      10,    0,   79,    2, 0x0a,   10 /* Public */,
      11,    0,   80,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AutomatonObjectRepresentation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutomatonObjectRepresentation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->propagateSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->propagatePosition(); break;
        case 4: _t->propagateName(); break;
        case 5: _t->emitPositionChanged(); break;
        case 6: _t->updateSelection(); break;
        case 7: _t->updateName(); break;
        case 8: _t->updatePosition(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AutomatonObjectRepresentation::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutomatonObjectRepresentation::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AutomatonObjectRepresentation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutomatonObjectRepresentation::positionChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject AutomatonObjectRepresentation::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsTextItem::staticMetaObject>(),
    qt_meta_stringdata_AutomatonObjectRepresentation.offsetsAndSize,
    qt_meta_data_AutomatonObjectRepresentation,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_AutomatonObjectRepresentation_t
, QtPrivate::TypeAndForceComplete<AutomatonObjectRepresentation, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *AutomatonObjectRepresentation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutomatonObjectRepresentation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutomatonObjectRepresentation.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsTextItem::qt_metacast(_clname);
}

int AutomatonObjectRepresentation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsTextItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AutomatonObjectRepresentation::selectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AutomatonObjectRepresentation::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
