/****************************************************************************
** Meta object code from reading C++ file 'GExtensionDialog.h'
**
** Created: Tue Apr 16 17:30:42 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../release_gui/GExtensionDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GExtensionDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GExtensionDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   17,   17,   17, 0x08,
      57,   17,   17,   17, 0x08,
      80,   17,   17,   17, 0x08,
     101,   17,   17,   17, 0x08,
     122,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GExtensionDialog[] = {
    "GExtensionDialog\0\0updateExtensions()\0"
    "on_btnAdd_clicked()\0on_btnDelete_clicked()\0"
    "on_btnBox_accepted()\0on_btnBox_rejected()\0"
    "on_btnFileExt_clicked()\0"
};

void GExtensionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GExtensionDialog *_t = static_cast<GExtensionDialog *>(_o);
        switch (_id) {
        case 0: _t->updateExtensions(); break;
        case 1: _t->on_btnAdd_clicked(); break;
        case 2: _t->on_btnDelete_clicked(); break;
        case 3: _t->on_btnBox_accepted(); break;
        case 4: _t->on_btnBox_rejected(); break;
        case 5: _t->on_btnFileExt_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GExtensionDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GExtensionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GExtensionDialog,
      qt_meta_data_GExtensionDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GExtensionDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GExtensionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GExtensionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GExtensionDialog))
        return static_cast<void*>(const_cast< GExtensionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int GExtensionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void GExtensionDialog::updateExtensions()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
