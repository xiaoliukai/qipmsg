/****************************************************************************
** Meta object code from reading C++ file 'send_file_manager.h'
**
** Created: Fri Dec 6 13:49:50 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../send_file_manager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'send_file_manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SendFileManager[] = {

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
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   43,   16,   16, 0x0a,
      71,   43,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SendFileManager[] = {
    "SendFileManager\0\0transferCountChanged(int)\0"
    "key\0removeTransfer(QString)\0"
    "removeTransferLocked(QString)\0"
};

void SendFileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SendFileManager *_t = static_cast<SendFileManager *>(_o);
        switch (_id) {
        case 0: _t->transferCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->removeTransfer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->removeTransferLocked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SendFileManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SendFileManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SendFileManager,
      qt_meta_data_SendFileManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SendFileManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SendFileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SendFileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SendFileManager))
        return static_cast<void*>(const_cast< SendFileManager*>(this));
    return QObject::qt_metacast(_clname);
}

int SendFileManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SendFileManager::transferCountChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
