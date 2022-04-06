/****************************************************************************
** Meta object code from reading C++ file 'Automaton.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../core/Automaton.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Automaton.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Automaton_t {
    const uint offsetsAndSize[24];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Automaton_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Automaton_t qt_meta_stringdata_Automaton = {
    {
QT_MOC_LITERAL(0, 9), // "Automaton"
QT_MOC_LITERAL(10, 12), // "stateCreated"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 6), // "State*"
QT_MOC_LITERAL(31, 1), // "s"
QT_MOC_LITERAL(33, 12), // "stateDeleted"
QT_MOC_LITERAL(46, 17), // "transitionCreated"
QT_MOC_LITERAL(64, 11), // "Transition*"
QT_MOC_LITERAL(76, 1), // "t"
QT_MOC_LITERAL(78, 17), // "transitionDeleted"
QT_MOC_LITERAL(96, 16), // "selectionChanged"
QT_MOC_LITERAL(113, 20) // "emitSelectionChanged"

    },
    "Automaton\0stateCreated\0\0State*\0s\0"
    "stateDeleted\0transitionCreated\0"
    "Transition*\0t\0transitionDeleted\0"
    "selectionChanged\0emitSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Automaton[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       5,    1,   53,    2, 0x06,    3 /* Public */,
       6,    1,   56,    2, 0x06,    5 /* Public */,
       9,    1,   59,    2, 0x06,    7 /* Public */,
      10,    0,   62,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,   63,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Automaton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Automaton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stateCreated((*reinterpret_cast< State*(*)>(_a[1]))); break;
        case 1: _t->stateDeleted((*reinterpret_cast< State*(*)>(_a[1]))); break;
        case 2: _t->transitionCreated((*reinterpret_cast< Transition*(*)>(_a[1]))); break;
        case 3: _t->transitionDeleted((*reinterpret_cast< Transition*(*)>(_a[1]))); break;
        case 4: _t->selectionChanged(); break;
        case 5: _t->emitSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Automaton::*)(State * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Automaton::stateCreated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Automaton::*)(State * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Automaton::stateDeleted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Automaton::*)(Transition * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Automaton::transitionCreated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Automaton::*)(Transition * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Automaton::transitionDeleted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Automaton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Automaton::selectionChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject Automaton::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Automaton.offsetsAndSize,
    qt_meta_data_Automaton,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Automaton_t
, QtPrivate::TypeAndForceComplete<Automaton, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<State *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<State *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Transition *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Transition *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Automaton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Automaton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Automaton.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Automaton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Automaton::stateCreated(State * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Automaton::stateDeleted(State * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Automaton::transitionCreated(Transition * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Automaton::transitionDeleted(Transition * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Automaton::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
