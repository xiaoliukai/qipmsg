/****************************************************************************
** Meta object code from reading C++ file 'user_manager.h'
**
** Created: Fri Dec 6 13:49:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../user_manager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user_manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UserManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   45,   12,   12, 0x08,
      65,   45,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UserManager[] = {
    "UserManager\0\0userCount\0userCountUpdated(int)\0"
    "msg\0newUserMsg(Msg)\0newExitMsg(Msg)\0"
};

void UserManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UserManager *_t = static_cast<UserManager *>(_o);
        switch (_id) {
        case 0: _t->userCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->newUserMsg((*reinterpret_cast< Msg(*)>(_a[1]))); break;
        case 2: _t->newExitMsg((*reinterpret_cast< Msg(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UserManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UserManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UserManager,
      qt_meta_data_UserManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserManager))
        return static_cast<void*>(const_cast< UserManager*>(this));
    return QObject::qt_metacast(_clname);
}

int UserManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void UserManager::userCountUpdated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
