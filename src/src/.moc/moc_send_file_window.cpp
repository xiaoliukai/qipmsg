/****************************************************************************
** Meta object code from reading C++ file 'send_file_window.h'
**
** Created: Fri Dec 6 13:49:50 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../send_file_window.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'send_file_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SendFileWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   15,   15,   15, 0x08,
      44,   15,   15,   15, 0x08,
      53,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SendFileWindow[] = {
    "SendFileWindow\0\0addFileFinished()\0"
    "addFile()\0addDir()\0delFile()\0"
};

void SendFileWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SendFileWindow *_t = static_cast<SendFileWindow *>(_o);
        switch (_id) {
        case 0: _t->addFileFinished(); break;
        case 1: _t->addFile(); break;
        case 2: _t->addDir(); break;
        case 3: _t->delFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SendFileWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SendFileWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SendFileWindow,
      qt_meta_data_SendFileWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SendFileWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SendFileWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SendFileWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SendFileWindow))
        return static_cast<void*>(const_cast< SendFileWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int SendFileWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void SendFileWindow::addFileFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
