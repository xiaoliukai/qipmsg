/****************************************************************************
** Meta object code from reading C++ file 'msg_thread.h'
**
** Created: Tue Dec 3 16:06:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../msg_thread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'msg_thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MsgThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   11,   10,   10, 0x05,
      27,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   43,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MsgThread[] = {
    "MsgThread\0\0msg\0newMsg(Msg)\0newUserMsg(Msg)\0"
    "errorCode,s\0"
    "handleError(QAbstractSocket::SocketError,QString)\0"
};

void MsgThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MsgThread *_t = static_cast<MsgThread *>(_o);
        switch (_id) {
        case 0: _t->newMsg((*reinterpret_cast< Msg(*)>(_a[1]))); break;
        case 1: _t->newUserMsg((*reinterpret_cast< Msg(*)>(_a[1]))); break;
        case 2: _t->handleError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MsgThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MsgThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MsgThread,
      qt_meta_data_MsgThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MsgThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MsgThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MsgThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MsgThread))
        return static_cast<void*>(const_cast< MsgThread*>(this));
    return QThread::qt_metacast(_clname);
}

int MsgThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void MsgThread::newMsg(Msg _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MsgThread::newUserMsg(Msg _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
