/****************************************************************************
** Meta object code from reading C++ file 'recv_file_transfer.h'
**
** Created: Tue Dec 3 16:06:31 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../recv_file_transfer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recv_file_transfer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RecvFileTransfer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      37,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   17,   17,   17, 0x08,
      75,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RecvFileTransfer[] = {
    "RecvFileTransfer\0\0recvFileFinished()\0"
    "recvFileError(QString)\0stopTransfer()\0"
    "abortTransfer()\0"
};

void RecvFileTransfer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RecvFileTransfer *_t = static_cast<RecvFileTransfer *>(_o);
        switch (_id) {
        case 0: _t->recvFileFinished(); break;
        case 1: _t->recvFileError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->stopTransfer(); break;
        case 3: _t->abortTransfer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RecvFileTransfer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RecvFileTransfer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RecvFileTransfer,
      qt_meta_data_RecvFileTransfer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RecvFileTransfer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RecvFileTransfer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RecvFileTransfer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RecvFileTransfer))
        return static_cast<void*>(const_cast< RecvFileTransfer*>(this));
    return QObject::qt_metacast(_clname);
}

int RecvFileTransfer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void RecvFileTransfer::recvFileFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void RecvFileTransfer::recvFileError(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE