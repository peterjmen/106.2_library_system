/****************************************************************************
** Meta object code from reading C++ file 'adminwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../adminwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_adminWindow_t {
    uint offsetsAndSizes[20];
    char stringdata0[12];
    char stringdata1[35];
    char stringdata2[1];
    char stringdata3[33];
    char stringdata4[16];
    char stringdata5[15];
    char stringdata6[18];
    char stringdata7[25];
    char stringdata8[16];
    char stringdata9[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_adminWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_adminWindow_t qt_meta_stringdata_adminWindow = {
    {
        QT_MOC_LITERAL(0, 11),  // "adminWindow"
        QT_MOC_LITERAL(12, 34),  // "on_pushButton_admin_logout_cl..."
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 32),  // "on_bookSearchButtonAdmin_clicked"
        QT_MOC_LITERAL(81, 15),  // "editBookClicked"
        QT_MOC_LITERAL(97, 14),  // "bookPicClicked"
        QT_MOC_LITERAL(112, 17),  // "deleteBookClicked"
        QT_MOC_LITERAL(130, 24),  // "on_addBookButton_clicked"
        QT_MOC_LITERAL(155, 15),  // "editUserClicked"
        QT_MOC_LITERAL(171, 17)   // "deleteUserClicked"
    },
    "adminWindow",
    "on_pushButton_admin_logout_clicked",
    "",
    "on_bookSearchButtonAdmin_clicked",
    "editBookClicked",
    "bookPicClicked",
    "deleteBookClicked",
    "on_addBookButton_clicked",
    "editUserClicked",
    "deleteUserClicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_adminWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject adminWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_adminWindow.offsetsAndSizes,
    qt_meta_data_adminWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_adminWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<adminWindow, std::true_type>,
        // method 'on_pushButton_admin_logout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bookSearchButtonAdmin_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editBookClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'bookPicClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteBookClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addBookButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editUserClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteUserClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void adminWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<adminWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_admin_logout_clicked(); break;
        case 1: _t->on_bookSearchButtonAdmin_clicked(); break;
        case 2: _t->editBookClicked(); break;
        case 3: _t->bookPicClicked(); break;
        case 4: _t->deleteBookClicked(); break;
        case 5: _t->on_addBookButton_clicked(); break;
        case 6: _t->editUserClicked(); break;
        case 7: _t->deleteUserClicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *adminWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adminWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_adminWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int adminWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
