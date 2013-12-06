/****************************************************************************
** Meta object code from reading C++ file 'recv_file_thread.h'
**
** Created: Fri Dec 6 13:49:46 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../recv_file_thread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recv_file_thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RecvFileThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   16,   15,   15, 0x05,
      51,   15,   15,   15, 0x05,
      70,   15,   15,   15, 0x05,
      85,   15,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_RecvFileThread[] = {
    "RecvFileThread\0\0errorString\0"
    "recvFileError(QString)\0recvFileFinished()\0"
    "stopTransfer()\0abortTransfer()\0"
};

void RecvFileThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RecvFileThread *_t = static_cast<RecvFileThread *>(_o);
        switch (_id) {
        case 0: _t->recvFileError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->recvFileFinished(); break;
        case 2: _t->stopTransfer(); break;
        case 3: _t->abortTransfer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RecvFileThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RecvFileThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_RecvFileThread,
      qt_meta_data_RecvFileThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RecvFileThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RecvFileThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RecvFileThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RecvFileThread))
        return static_cast<void*>(const_cast< RecvFileThread*>(this));
    return QThread::qt_metacast(_clname);
}

int RecvFileThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void RecvFileThread::recvFileError(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RecvFileThread::recvFileFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void RecvFileThread::stopTransfer()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void RecvFileThread::abortTransfer()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
