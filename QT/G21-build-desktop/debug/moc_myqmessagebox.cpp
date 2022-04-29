/****************************************************************************
** Meta object code from reading C++ file 'myqmessagebox.h'
**
** Created: Fri 29. Apr 23:33:40 2022
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../G21/myqmessagebox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myqmessagebox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_myQMessageBox[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      41,   14,   14,   14, 0x08,
      67,   14,   14,   14, 0x08,
      93,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_myQMessageBox[] = {
    "myQMessageBox\0\0on_pushButton_4_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0"
};

const QMetaObject myQMessageBox::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_myQMessageBox,
      qt_meta_data_myQMessageBox, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &myQMessageBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *myQMessageBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *myQMessageBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_myQMessageBox))
        return static_cast<void*>(const_cast< myQMessageBox*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int myQMessageBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_4_clicked(); break;
        case 1: on_pushButton_3_clicked(); break;
        case 2: on_pushButton_2_clicked(); break;
        case 3: on_pushButton_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
