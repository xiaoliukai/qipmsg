/****************************************************************************
** Meta object code from reading C++ file 'dir_dialog.h'
**
** Created: Tue Dec 3 16:06:26 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dir_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dir_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DirDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DirDialog[] = {
    "DirDialog\0\0dirSelected()\0selectDir()\0"
};

void DirDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DirDialog *_t = static_cast<DirDialog *>(_o);
        switch (_id) {
        case 0: _t->dirSelected(); break;
        case 1: _t->selectDir(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DirDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DirDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DirDialog,
      qt_meta_data_DirDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DirDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DirDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DirDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DirDialog))
        return static_cast<void*>(const_cast< DirDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int DirDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DirDialog::dirSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
