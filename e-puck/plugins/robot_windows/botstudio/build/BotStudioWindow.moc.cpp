/****************************************************************************
** Meta object code from reading C++ file 'BotStudioWindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../core/BotStudioWindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BotStudioWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BotStudioWindow_t {
    const uint offsetsAndSize[32];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_BotStudioWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_BotStudioWindow_t qt_meta_stringdata_BotStudioWindow = {
    {
QT_MOC_LITERAL(0, 15), // "BotStudioWindow"
QT_MOC_LITERAL(16, 16), // "openStateMachine"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 16), // "saveStateMachine"
QT_MOC_LITERAL(51, 18), // "saveAsStateMachine"
QT_MOC_LITERAL(70, 21), // "selectionToolSelected"
QT_MOC_LITERAL(92, 7), // "checked"
QT_MOC_LITERAL(100, 20), // "newStateToolSelected"
QT_MOC_LITERAL(121, 25), // "newTransitionToolSelected"
QT_MOC_LITERAL(147, 25), // "setSelectedStateAsInitial"
QT_MOC_LITERAL(173, 21), // "deleteSelectedObjects"
QT_MOC_LITERAL(195, 16), // "deleteAllObjects"
QT_MOC_LITERAL(212, 6), // "upload"
QT_MOC_LITERAL(219, 14), // "updateToolBars"
QT_MOC_LITERAL(234, 18), // "showWarningMessage"
QT_MOC_LITERAL(253, 4) // "text"

    },
    "BotStudioWindow\0openStateMachine\0\0"
    "saveStateMachine\0saveAsStateMachine\0"
    "selectionToolSelected\0checked\0"
    "newStateToolSelected\0newTransitionToolSelected\0"
    "setSelectedStateAsInitial\0"
    "deleteSelectedObjects\0deleteAllObjects\0"
    "upload\0updateToolBars\0showWarningMessage\0"
    "text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BotStudioWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    1,   89,    2, 0x08,    4 /* Private */,
       7,    1,   92,    2, 0x08,    6 /* Private */,
       8,    1,   95,    2, 0x08,    8 /* Private */,
       9,    0,   98,    2, 0x08,   10 /* Private */,
      10,    0,   99,    2, 0x08,   11 /* Private */,
      11,    0,  100,    2, 0x08,   12 /* Private */,
      12,    1,  101,    2, 0x08,   13 /* Private */,
      13,    0,  104,    2, 0x08,   15 /* Private */,
      14,    1,  105,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

void BotStudioWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BotStudioWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openStateMachine(); break;
        case 1: _t->saveStateMachine(); break;
        case 2: _t->saveAsStateMachine(); break;
        case 3: _t->selectionToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->newStateToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->newTransitionToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setSelectedStateAsInitial(); break;
        case 7: _t->deleteSelectedObjects(); break;
        case 8: _t->deleteAllObjects(); break;
        case 9: _t->upload((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->updateToolBars(); break;
        case 11: _t->showWarningMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject BotStudioWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<webotsQtUtils::MainWindow::staticMetaObject>(),
    qt_meta_stringdata_BotStudioWindow.offsetsAndSize,
    qt_meta_data_BotStudioWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_BotStudioWindow_t
, QtPrivate::TypeAndForceComplete<BotStudioWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *BotStudioWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BotStudioWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BotStudioWindow.stringdata0))
        return static_cast<void*>(this);
    return webotsQtUtils::MainWindow::qt_metacast(_clname);
}

int BotStudioWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = webotsQtUtils::MainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
