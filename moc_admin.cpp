/****************************************************************************
** Meta object code from reading C++ file 'admin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "admin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Admin_t {
    QByteArrayData data[15];
    char stringdata0[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Admin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Admin_t qt_meta_stringdata_Admin = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Admin"
QT_MOC_LITERAL(1, 6, 20), // "on_AddButton_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 23), // "on_revertButton_clicked"
QT_MOC_LITERAL(4, 52, 32), // "on_loadSouvenirsAdminBtn_clicked"
QT_MOC_LITERAL(5, 85, 42), // "on_collegeListComboBox_curren..."
QT_MOC_LITERAL(6, 128, 4), // "arg1"
QT_MOC_LITERAL(7, 133, 25), // "on_changePriceBtn_clicked"
QT_MOC_LITERAL(8, 159, 18), // "on_backBtn_clicked"
QT_MOC_LITERAL(9, 178, 20), // "on_backBtn_2_clicked"
QT_MOC_LITERAL(10, 199, 23), // "on_addSouvenirs_clicked"
QT_MOC_LITERAL(11, 223, 26), // "on_deleteSouvenirs_clicked"
QT_MOC_LITERAL(12, 250, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(13, 271, 39), // "on_chooseCampusList_currentIn..."
QT_MOC_LITERAL(14, 311, 31) // "on_deleteChosenSouvenir_clicked"

    },
    "Admin\0on_AddButton_clicked\0\0"
    "on_revertButton_clicked\0"
    "on_loadSouvenirsAdminBtn_clicked\0"
    "on_collegeListComboBox_currentIndexChanged\0"
    "arg1\0on_changePriceBtn_clicked\0"
    "on_backBtn_clicked\0on_backBtn_2_clicked\0"
    "on_addSouvenirs_clicked\0"
    "on_deleteSouvenirs_clicked\0"
    "on_addButton_clicked\0"
    "on_chooseCampusList_currentIndexChanged\0"
    "on_deleteChosenSouvenir_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Admin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    1,   77,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    1,   86,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void Admin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Admin *_t = static_cast<Admin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_AddButton_clicked(); break;
        case 1: _t->on_revertButton_clicked(); break;
        case 2: _t->on_loadSouvenirsAdminBtn_clicked(); break;
        case 3: _t->on_collegeListComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_changePriceBtn_clicked(); break;
        case 5: _t->on_backBtn_clicked(); break;
        case 6: _t->on_backBtn_2_clicked(); break;
        case 7: _t->on_addSouvenirs_clicked(); break;
        case 8: _t->on_deleteSouvenirs_clicked(); break;
        case 9: _t->on_addButton_clicked(); break;
        case 10: _t->on_chooseCampusList_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_deleteChosenSouvenir_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Admin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Admin.data,
      qt_meta_data_Admin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Admin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Admin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Admin.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Admin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
