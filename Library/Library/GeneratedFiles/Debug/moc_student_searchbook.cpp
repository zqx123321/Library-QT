/****************************************************************************
** Meta object code from reading C++ file 'student_searchbook.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../student_searchbook.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'student_searchbook.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_student_searchBook_t {
    QByteArrayData data[7];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_student_searchBook_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_student_searchBook_t qt_meta_stringdata_student_searchBook = {
    {
QT_MOC_LITERAL(0, 0, 18), // "student_searchBook"
QT_MOC_LITERAL(1, 19, 8), // "sendData"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "OnBtnClicked"
QT_MOC_LITERAL(4, 42, 2), // "id"
QT_MOC_LITERAL(5, 45, 12), // "radioBtnSlot"
QT_MOC_LITERAL(6, 58, 17) // "radioBtnSlotOther"

    },
    "student_searchBook\0sendData\0\0OnBtnClicked\0"
    "id\0radioBtnSlot\0radioBtnSlotOther"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_student_searchBook[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   37,    2, 0x0a /* Public */,
       5,    0,   40,    2, 0x0a /* Public */,
       6,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void student_searchBook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        student_searchBook *_t = static_cast<student_searchBook *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->OnBtnClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->radioBtnSlot(); break;
        case 3: _t->radioBtnSlotOther(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (student_searchBook::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&student_searchBook::sendData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject student_searchBook::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_student_searchBook.data,
      qt_meta_data_student_searchBook,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *student_searchBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *student_searchBook::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_student_searchBook.stringdata0))
        return static_cast<void*>(const_cast< student_searchBook*>(this));
    return QWidget::qt_metacast(_clname);
}

int student_searchBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void student_searchBook::sendData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
