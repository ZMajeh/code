/****************************************************************************
** Meta object code from reading C++ file 'downloader.h'
**
** Created: Thu 26. May 21:09:11 2022
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../P26/downloader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_downloader[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      31,   11,   11,   11, 0x0a,
      85,   76,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_downloader[] = {
    "downloader\0\0statusChanged(int)\0"
    "responseHeaderReceieved(QHttpResponseHeader)\0"
    "id,error\0requestFinished(int,bool)\0"
};

const QMetaObject downloader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_downloader,
      qt_meta_data_downloader, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &downloader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *downloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *downloader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_downloader))
        return static_cast<void*>(const_cast< downloader*>(this));
    return QObject::qt_metacast(_clname);
}

int downloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: statusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: responseHeaderReceieved((*reinterpret_cast< QHttpResponseHeader(*)>(_a[1]))); break;
        case 2: requestFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
