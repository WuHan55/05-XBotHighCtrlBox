/****************************************************************************
** Meta object code from reading C++ file 'abstractmeter.h'
**
** Created: Wed Mar 20 15:51:57 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/abstractmeter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractmeter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AbstractMeter[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   15,   14,   14, 0x05,
      37,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   15,   14,   14, 0x0a,
      72,   15,   14,   14, 0x0a,
      88,   15,   14,   14, 0x0a,
     105,   15,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AbstractMeter[] = {
    "AbstractMeter\0\0val\0valueChanged(int)\0"
    "valueChanged(double)\0setValue(int)\0"
    "setValue_1(int)\0setValue(double)\0"
    "setValue_1(double)\0"
};

const QMetaObject AbstractMeter::staticMetaObject = {
    { &WidgetWithBackground::staticMetaObject, qt_meta_stringdata_AbstractMeter,
      qt_meta_data_AbstractMeter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbstractMeter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbstractMeter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbstractMeter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractMeter))
        return static_cast<void*>(const_cast< AbstractMeter*>(this));
    return WidgetWithBackground::qt_metacast(_clname);
}

int AbstractMeter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WidgetWithBackground::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: setValue_1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: setValue_1((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AbstractMeter::valueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AbstractMeter::valueChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
