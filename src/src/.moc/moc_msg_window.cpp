/****************************************************************************
** Meta object code from reading C++ file 'msg_window.h'
**
** Created: Tue Dec 3 16:06:30 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../msg_window.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'msg_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MsgWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      26,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   10,   10,   10, 0x08,
      60,   10,   10,   10, 0x08,
      75,   10,   10,   10, 0x08,
     113,   90,   10,   10, 0x08,
     142,   10,   10,   10, 0x08,
     171,  159,   10,   10, 0x08,
     194,   10,   10,   10, 0x08,
     212,   10,   10,   10, 0x08,
     229,   10,   10,   10, 0x08,
     246,   10,   10,   10, 0x08,
     266,   10,   10,   10, 0x08,
     292,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MsgWindow[] = {
    "MsgWindow\0\0stopTransfer()\0abortTransfer()\0"
    "showReplyMsgBox()\0openEnvelope()\0"
    "showRecvFile()\0fileIdList,saveFileDir\0"
    "saveFile(QList<int>,QString)\0"
    "recvFileFinish()\0errorString\0"
    "recvFileError(QString)\0updateFileCount()\0"
    "closeMsgWindow()\0cancelTransfer()\0"
    "runRecvFileThread()\0updateTransferStatsInfo()\0"
    "retryRecvFile()\0"
};

void MsgWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MsgWindow *_t = static_cast<MsgWindow *>(_o);
        switch (_id) {
        case 0: _t->stopTransfer(); break;
        case 1: _t->abortTransfer(); break;
        case 2: _t->showReplyMsgBox(); break;
        case 3: _t->openEnvelope(); break;
        case 4: _t->showRecvFile(); break;
        case 5: _t->saveFile((*reinterpret_cast< QList<int>(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->recvFileFinish(); break;
        case 7: _t->recvFileError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->updateFileCount(); break;
        case 9: _t->closeMsgWindow(); break;
        case 10: _t->cancelTransfer(); break;
        case 11: _t->runRecvFileThread(); break;
        case 12: _t->updateTransferStatsInfo(); break;
        case 13: _t->retryRecvFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MsgWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MsgWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MsgWindow,
      qt_meta_data_MsgWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MsgWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MsgWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MsgWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MsgWindow))
        return static_cast<void*>(const_cast< MsgWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int MsgWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MsgWindow::stopTransfer()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MsgWindow::abortTransfer()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
