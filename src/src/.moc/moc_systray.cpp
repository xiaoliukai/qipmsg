/****************************************************************************
** Meta object code from reading C++ file 'systray.h'
**
** Created: Tue Dec 3 16:06:38 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../systray.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systray.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Systray[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,    9,    8,    8, 0x08,
      30,    8,    8,    8, 0x08,
      62,   55,    8,    8, 0x08,
     115,    8,    8,    8, 0x08,
     123,    8,    8,    8, 0x08,
     131,    8,    8,    8, 0x08,
     138,    8,    8,    8, 0x08,
     148,    8,    8,    8, 0x08,
     170,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Systray[] = {
    "Systray\0\0i\0updateToolTip(int)\0"
    "updateTransferCount(int)\0reason\0"
    "trayIconActivated(QSystemTrayIcon::ActivationReason)\0"
    "setup()\0about()\0quit()\0readLog()\0"
    "setAllWindowVisible()\0showTransferFile()\0"
};

void Systray::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Systray *_t = static_cast<Systray *>(_o);
        switch (_id) {
        case 0: _t->updateToolTip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateTransferCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 3: _t->setup(); break;
        case 4: _t->about(); break;
        case 5: _t->quit(); break;
        case 6: _t->readLog(); break;
        case 7: _t->setAllWindowVisible(); break;
        case 8: _t->showTransferFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Systray::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Systray::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Systray,
      qt_meta_data_Systray, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Systray::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Systray::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Systray::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Systray))
        return static_cast<void*>(const_cast< Systray*>(this));
    return QObject::qt_metacast(_clname);
}

int Systray::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
