/****************************************************************************
** Meta object code from reading C++ file 'implrecrep.h'
**
** Created: Tue Mar 29 17:59:46 2011
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "implrecrep.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'implrecrep.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_ImplRecRep[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ImplRecRep[] = {
    "ImplRecRep\0\0stopSignal()\0stopSlot()\0"
};

const QMetaObject ImplRecRep::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ImplRecRep,
      qt_meta_data_ImplRecRep, 0 }
};

const QMetaObject *ImplRecRep::metaObject() const
{
    return &staticMetaObject;
}

void *ImplRecRep::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImplRecRep))
	return static_cast<void*>(const_cast< ImplRecRep*>(this));
    return QObject::qt_metacast(_clname);
}

int ImplRecRep::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: stopSignal(); break;
        case 1: stopSlot(); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ImplRecRep::stopSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
