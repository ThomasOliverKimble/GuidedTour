/****************************************************************************
** Meta object code from reading C++ file 'AutomatonScene.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../core/AutomatonScene.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutomatonScene.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutomatonScene_t {
    const uint offsetsAndSize[24];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_AutomatonScene_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_AutomatonScene_t qt_meta_stringdata_AutomatonScene = {
    {
QT_MOC_LITERAL(0, 14), // "AutomatonScene"
QT_MOC_LITERAL(15, 12), // "stateCreated"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 6), // "State*"
QT_MOC_LITERAL(36, 1), // "s"
QT_MOC_LITERAL(38, 12), // "stateDeleted"
QT_MOC_LITERAL(51, 17), // "transitionCreated"
QT_MOC_LITERAL(69, 11), // "Transition*"
QT_MOC_LITERAL(81, 1), // "t"
QT_MOC_LITERAL(83, 17), // "transitionDeleted"
QT_MOC_LITERAL(101, 13), // "updateEnabled"
QT_MOC_LITERAL(115, 7) // "enabled"

    },
    "AutomatonScene\0stateCreated\0\0State*\0"
    "s\0stateDeleted\0transitionCreated\0"
    "Transition*\0t\0transitionDeleted\0"
    "updateEnabled\0enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutomatonScene[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x0a,    1 /* Public */,
       5,    1,   47,    2, 0x0a,    3 /* Public */,
       6,    1,   50,    2, 0x0a,    5 /* Public */,
       9,    1,   53,    2, 0x0a,    7 /* Public */,
      10,    1,   56,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void AutomatonScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutomatonScene *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stateCreated((*reinterpret_cast< State*(*)>(_a[1]))); break;
        case 1: _t->stateDeleted((*reinterpret_cast< State*(*)>(_a[1]))); break;
        case 2: _t->transitionCreated((*reinterpret_cast< Transition*(*)>(_a[1]))); break;
        case 3: _t->transitionDeleted((*reinterpret_cast< Transition*(*)>(_a[1]))); break;
        case 4: _t->updateEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AutomatonScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_AutomatonScene.offsetsAndSize,
    qt_meta_data_AutomatonScene,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_AutomatonScene_t
, QtPrivate::TypeAndForceComplete<AutomatonScene, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<State *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<State *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Transition *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Transition *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *AutomatonScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutomatonScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutomatonScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int AutomatonScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
