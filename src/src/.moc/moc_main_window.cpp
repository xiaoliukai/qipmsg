/****************************************************************************
** Meta object code from reading C++ file 'main_window.h'
**
** Created: Fri Dec 6 13:49:42 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../main_window.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,   11,   11,   11, 0x09,
      62,   11,   11,   11, 0x09,
      87,   85,   11,   11, 0x08,
     108,   11,   11,   11, 0x08,
     122,   11,   11,   11, 0x08,
     140,   11,   11,   11, 0x08,
     159,   11,   11,   11, 0x08,
     177,   11,   11,   11, 0x08,
     191,   11,   11,   11, 0x08,
     204,   11,   11,   11, 0x08,
     231,  218,   11,   11, 0x08,
     247,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0messageReplyed()\0"
    "dragEnterEvent(QDragEnterEvent*)\0"
    "dropEvent(QDropEvent*)\0i\0updateUserCount(int)\0"
    "sendMessage()\0refreshUserList()\0"
    "showSendFileList()\0updateFileCount()\0"
    "addSendFile()\0addSendDir()\0selectGroup()\0"
    "searchString\0search(QString)\0"
    "showSearchDialog()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->messageReplyed(); break;
        case 1: _t->dragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 2: _t->dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 3: _t->updateUserCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sendMessage(); break;
        case 5: _t->refreshUserList(); break;
        case 6: _t->showSendFileList(); break;
        case 7: _t->updateFileCount(); break;
        case 8: _t->addSendFile(); break;
        case 9: _t->addSendDir(); break;
        case 10: _t->selectGroup(); break;
        case 11: _t->search((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->showSearchDialog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::messageReplyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
