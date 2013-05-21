/****************************************************************************
** Meta object code from reading C++ file 'attack_calculator.h'
**
** Created: Thu Apr 25 21:10:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "attack_calculator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attack_calculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_attack_calculator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      42,   18,   18,   18, 0x08,
      75,   64,   18,   18, 0x08,
     109,   64,   18,   18, 0x08,
     143,   18,   18,   18, 0x08,
     166,   18,   18,   18, 0x08,
     192,   18,   18,   18, 0x08,
     216,   18,   18,   18, 0x08,
     231,   18,   18,   18, 0x08,
     252,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_attack_calculator[] = {
    "attack_calculator\0\0on_btn_addRW_clicked()\0"
    "on_btnReset_clicked()\0currentRow\0"
    "on_list_rw_currentRowChanged(int)\0"
    "on_list_sw_currentRowChanged(int)\0"
    "on_btn_addSW_clicked()\0on_btnCalculate_clicked()\0"
    "on_btn_Remove_clicked()\0checkBonuses()\0"
    "on_btnSave_clicked()\0on_btnLoad_clicked()\0"
};

void attack_calculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        attack_calculator *_t = static_cast<attack_calculator *>(_o);
        switch (_id) {
        case 0: _t->on_btn_addRW_clicked(); break;
        case 1: _t->on_btnReset_clicked(); break;
        case 2: _t->on_list_rw_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_list_sw_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_btn_addSW_clicked(); break;
        case 5: _t->on_btnCalculate_clicked(); break;
        case 6: _t->on_btn_Remove_clicked(); break;
        case 7: _t->checkBonuses(); break;
        case 8: _t->on_btnSave_clicked(); break;
        case 9: _t->on_btnLoad_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData attack_calculator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject attack_calculator::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_attack_calculator,
      qt_meta_data_attack_calculator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &attack_calculator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *attack_calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *attack_calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_attack_calculator))
        return static_cast<void*>(const_cast< attack_calculator*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int attack_calculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
