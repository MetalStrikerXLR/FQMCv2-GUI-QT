/****************************************************************************
** Meta object code from reading C++ file 'tcpsoketconnect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../tcpsoketconnect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpsoketconnect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TCPsoketconnect_t {
    QByteArrayData data[11];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TCPsoketconnect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TCPsoketconnect_t qt_meta_stringdata_TCPsoketconnect = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TCPsoketconnect"
QT_MOC_LITERAL(1, 16, 22), // "updateConnectionStatus"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 10), // "sendUpdate"
QT_MOC_LITERAL(4, 51, 9), // "connected"
QT_MOC_LITERAL(5, 61, 12), // "disconnected"
QT_MOC_LITERAL(6, 74, 12), // "bytesWritten"
QT_MOC_LITERAL(7, 87, 5), // "bytes"
QT_MOC_LITERAL(8, 93, 9), // "readyRead"
QT_MOC_LITERAL(9, 103, 5), // "retry"
QT_MOC_LITERAL(10, 109, 13) // "requestSignal"

    },
    "TCPsoketconnect\0updateConnectionStatus\0"
    "\0sendUpdate\0connected\0disconnected\0"
    "bytesWritten\0bytes\0readyRead\0retry\0"
    "requestSignal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TCPsoketconnect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,   40,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  138,    2, 0x0a /* Public */,
       5,    0,  139,    2, 0x0a /* Public */,
       6,    1,  140,    2, 0x0a /* Public */,
       8,    0,  143,    2, 0x0a /* Public */,
       9,    0,  144,    2, 0x0a /* Public */,
      10,    0,  145,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TCPsoketconnect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TCPsoketconnect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateConnectionStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendUpdate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18])),(*reinterpret_cast< float(*)>(_a[19])),(*reinterpret_cast< float(*)>(_a[20])),(*reinterpret_cast< float(*)>(_a[21])),(*reinterpret_cast< float(*)>(_a[22])),(*reinterpret_cast< float(*)>(_a[23])),(*reinterpret_cast< float(*)>(_a[24])),(*reinterpret_cast< float(*)>(_a[25])),(*reinterpret_cast< float(*)>(_a[26])),(*reinterpret_cast< float(*)>(_a[27])),(*reinterpret_cast< float(*)>(_a[28])),(*reinterpret_cast< float(*)>(_a[29])),(*reinterpret_cast< float(*)>(_a[30])),(*reinterpret_cast< float(*)>(_a[31])),(*reinterpret_cast< float(*)>(_a[32])),(*reinterpret_cast< float(*)>(_a[33])),(*reinterpret_cast< float(*)>(_a[34])),(*reinterpret_cast< float(*)>(_a[35])),(*reinterpret_cast< float(*)>(_a[36])),(*reinterpret_cast< float(*)>(_a[37])),(*reinterpret_cast< float(*)>(_a[38])),(*reinterpret_cast< float(*)>(_a[39])),(*reinterpret_cast< float(*)>(_a[40]))); break;
        case 2: _t->connected(); break;
        case 3: _t->disconnected(); break;
        case 4: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->readyRead(); break;
        case 6: _t->retry(); break;
        case 7: _t->requestSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TCPsoketconnect::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPsoketconnect::updateConnectionStatus)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TCPsoketconnect::*)(float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPsoketconnect::sendUpdate)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TCPsoketconnect::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TCPsoketconnect.data,
    qt_meta_data_TCPsoketconnect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TCPsoketconnect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCPsoketconnect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TCPsoketconnect.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TCPsoketconnect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void TCPsoketconnect::updateConnectionStatus(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TCPsoketconnect::sendUpdate(float _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, float _t8, float _t9, float _t10, float _t11, float _t12, float _t13, float _t14, float _t15, float _t16, float _t17, float _t18, float _t19, float _t20, float _t21, float _t22, float _t23, float _t24, float _t25, float _t26, float _t27, float _t28, float _t29, float _t30, float _t31, float _t32, float _t33, float _t34, float _t35, float _t36, float _t37, float _t38, float _t39, float _t40)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t10))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t11))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t12))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t13))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t14))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t15))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t16))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t17))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t18))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t19))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t20))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t21))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t22))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t23))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t24))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t25))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t26))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t27))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t28))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t29))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t30))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t31))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t32))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t33))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t34))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t35))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t36))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t37))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t38))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t39))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t40))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
