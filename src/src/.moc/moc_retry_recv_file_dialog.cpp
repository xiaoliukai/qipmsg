/****************************************************************************
** Meta object code from reading C++ file 'retry_recv_file_dialog.h'
**
** Created: Fri Dec 6 13:49:47 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../retry_recv_file_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'retry_recv_file_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RetryRecvFileDialog[] = {

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
      21,   20,   20,   20, 0x05,
      29,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RetryRecvFileDialog[] = {
    "RetryRecvFileDialog\0\0retry()\0"
    "retryChecked()\0retryGetFile()\0"
};

void RetryRecvFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RetryRecvFileDialog *_t = static_cast<RetryRecvFileDialog *>(_o);
        switch (_id) {
        case 0: _t->retry(); break;
        case 1: _t->retryChecked(); break;
        case 2: _t->retryGetFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RetryRecvFileDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RetryRecvFileDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RetryRecvFileDialog,
      qt_meta_data_RetryRecvFileDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RetryRecvFileDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RetryRecvFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RetryRecvFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RetryRecvFileDialog))
        return static_cast<void*>(const_cast< RetryRecvFileDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int RetryRecvFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void RetryRecvFileDialog::retry()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void RetryRecvFileDialog::retryChecked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
