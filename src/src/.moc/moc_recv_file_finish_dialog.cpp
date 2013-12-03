/****************************************************************************
** Meta object code from reading C++ file 'recv_file_finish_dialog.h'
**
** Created: Tue Dec 3 16:06:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../recv_file_finish_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recv_file_finish_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RecvFileFinishDialog[] = {

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
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   21,   21,   21, 0x08,
      47,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RecvFileFinishDialog[] = {
    "RecvFileFinishDialog\0\0fileChecked()\0"
    "openFile()\0openDir()\0"
};

void RecvFileFinishDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RecvFileFinishDialog *_t = static_cast<RecvFileFinishDialog *>(_o);
        switch (_id) {
        case 0: _t->fileChecked(); break;
        case 1: _t->openFile(); break;
        case 2: _t->openDir(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RecvFileFinishDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RecvFileFinishDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RecvFileFinishDialog,
      qt_meta_data_RecvFileFinishDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RecvFileFinishDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RecvFileFinishDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RecvFileFinishDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RecvFileFinishDialog))
        return static_cast<void*>(const_cast< RecvFileFinishDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int RecvFileFinishDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void RecvFileFinishDialog::fileChecked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
