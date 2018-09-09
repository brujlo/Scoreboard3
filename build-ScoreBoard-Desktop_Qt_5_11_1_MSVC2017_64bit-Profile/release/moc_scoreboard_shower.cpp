/****************************************************************************
** Meta object code from reading C++ file 'scoreboard_shower.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ScoreBoard/scoreboard_shower.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scoreboard_shower.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scoreboard_Shower_t {
    QByteArrayData data[9];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scoreboard_Shower_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scoreboard_Shower_t qt_meta_stringdata_Scoreboard_Shower = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Scoreboard_Shower"
QT_MOC_LITERAL(1, 18, 15), // "timerHasChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 8), // "foulHome"
QT_MOC_LITERAL(4, 44, 8), // "foulAway"
QT_MOC_LITERAL(5, 53, 8), // "goalHome"
QT_MOC_LITERAL(6, 62, 8), // "goalAway"
QT_MOC_LITERAL(7, 71, 8), // "teamHome"
QT_MOC_LITERAL(8, 80, 8) // "teamAway"

    },
    "Scoreboard_Shower\0timerHasChanged\0\0"
    "foulHome\0foulAway\0goalHome\0goalAway\0"
    "teamHome\0teamAway"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scoreboard_Shower[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       3,    1,   52,    2, 0x0a /* Public */,
       4,    1,   55,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x0a /* Public */,
       6,    1,   61,    2, 0x0a /* Public */,
       7,    1,   64,    2, 0x0a /* Public */,
       8,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Scoreboard_Shower::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scoreboard_Shower *_t = static_cast<Scoreboard_Shower *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timerHasChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->foulHome((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->foulAway((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->goalHome((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->goalAway((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->teamHome((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->teamAway((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Scoreboard_Shower::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Scoreboard_Shower.data,
      qt_meta_data_Scoreboard_Shower,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Scoreboard_Shower::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scoreboard_Shower::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scoreboard_Shower.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Scoreboard_Shower::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
