/****************************************************************************
** Meta object code from reading C++ file 'msg_server.h'
**
** Created: Fri Dec 6 13:49:40 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../msg_server.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'msg_server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MsgServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   11,   10,   10, 0x05,
      31,   11,   10,   10, 0x05,
      47,   11,   10,   10, 0x05,
      72,   59,   10,   10, 0x05,
     131,  116,   10,   10, 0x05,
     157,  152,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     176,   10,   10,   10, 0x0a,
     193,   10,   10,   10, 0x0a,
     236,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MsgServer[] = {
    "MsgServer\0\0msg\0newUserMsg(Msg)\0"
    "newExitMsg(Msg)\0newMsg(Msg)\0,errorString\0"
    "error(QAbstractSocket::SocketError,QString)\0"
    "additionalInfo\0releaseFile(QString)\0"
    "name\0msgReaded(QString)\0processSendMsg()\0"
    "socketEerror(QAbstractSocket::SocketError)\0"
    "readPacket()\0"
};

void MsgServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MsgServer *_t = static_cast<MsgServer *>(_o);
        switch (_id) {
        case 0: _t->newUserMsg((*reinterpret_cast< Msg(*)>(_a[1]))); break;
        case 1: _t->newExitMsg((*reinterpret_cast< Msg(*)>(_a[1]))); break;
        case 2: _t->newMsg((*reinterpret_cast< Msg(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->releaseFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->msgReaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->processSendMsg(); break;
        case 7: _t->socketEerror((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 8: _t->readPacket(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MsgServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MsgServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MsgServer,
      qt_meta_data_MsgServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MsgServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MsgServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MsgServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MsgServer))
        return static_cast<void*>(const_cast< MsgServer*>(this));
    return QObject::qt_metacast(_clname);
}

int MsgServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MsgServer::newUserMsg(Msg _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MsgServer::newExitMsg(Msg _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MsgServer::newMsg(Msg _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MsgServer::error(QAbstractSocket::SocketError _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MsgServer::releaseFile(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MsgServer::msgReaded(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
