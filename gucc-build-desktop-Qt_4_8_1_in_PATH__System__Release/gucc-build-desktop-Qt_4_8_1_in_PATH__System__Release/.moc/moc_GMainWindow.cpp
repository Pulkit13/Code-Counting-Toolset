/****************************************************************************
** Meta object code from reading C++ file 'GMainWindow.h'
**
** Created: Tue Apr 16 17:30:46 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../release_gui/GMainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      32,   12,   12,   12, 0x08,
      66,   12,   54,   12, 0x08,
      79,   12,   12,   12, 0x08,
     110,   12,   12,   12, 0x08,
     142,   12,   12,   12, 0x08,
     179,   12,   12,   12, 0x08,
     205,   12,   12,   12, 0x08,
     238,   12,   12,   12, 0x08,
     265,   12,   12,   12, 0x08,
     316,  308,   12,   12, 0x08,
     366,   12,   12,   12, 0x08,
     409,   12,   12,   12, 0x08,
     434,   12,   12,   12, 0x08,
     462,   12,   12,   12, 0x08,
     489,   12,   12,   12, 0x08,
     514,   12,   12,   12, 0x08,
     542,   12,   12,   12, 0x08,
     569,   12,   12,   12, 0x08,
     598,   12,   12,   12, 0x08,
     627,   12,   12,   12, 0x08,
     656,   12,   12,   12, 0x08,
     687,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GMainWindow[] = {
    "GMainWindow\0\0extensionUpdated()\0"
    "on_btnCount_clicked()\0QStringList\0"
    "getFilters()\0on_actionFile_Open_triggered()\0"
    "on_actionExtensions_triggered()\0"
    "on_actionEdit_Extensions_triggered()\0"
    "on_actionExit_triggered()\0"
    "on_actionUser_Manual_triggered()\0"
    "on_actionAbout_triggered()\0"
    "on_lwExtensionListA_itemSelectionChanged()\0"
    "indexes\0on_lwExtensionListA_indexesMoved(QModelIndexList)\0"
    "on_lwExtensionListB_itemSelectionChanged()\0"
    "on_btnAddFileB_clicked()\0"
    "on_btnRemoveFileB_clicked()\0"
    "on_btnAddFolderB_clicked()\0"
    "on_btnAddFileA_clicked()\0"
    "on_btnRemoveFileA_clicked()\0"
    "on_btnAddFolderA_clicked()\0"
    "on_chkDifferencing_clicked()\0"
    "on_chkModThreshold_clicked()\0"
    "on_chkDupThreshold_clicked()\0"
    "on_chkTruncThreshold_clicked()\0"
    "on_chkExtensionFile_clicked()\0"
};

void GMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GMainWindow *_t = static_cast<GMainWindow *>(_o);
        switch (_id) {
        case 0: _t->extensionUpdated(); break;
        case 1: _t->on_btnCount_clicked(); break;
        case 2: { QStringList _r = _t->getFilters();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 3: _t->on_actionFile_Open_triggered(); break;
        case 4: _t->on_actionExtensions_triggered(); break;
        case 5: _t->on_actionEdit_Extensions_triggered(); break;
        case 6: _t->on_actionExit_triggered(); break;
        case 7: _t->on_actionUser_Manual_triggered(); break;
        case 8: _t->on_actionAbout_triggered(); break;
        case 9: _t->on_lwExtensionListA_itemSelectionChanged(); break;
        case 10: _t->on_lwExtensionListA_indexesMoved((*reinterpret_cast< QModelIndexList(*)>(_a[1]))); break;
        case 11: _t->on_lwExtensionListB_itemSelectionChanged(); break;
        case 12: _t->on_btnAddFileB_clicked(); break;
        case 13: _t->on_btnRemoveFileB_clicked(); break;
        case 14: _t->on_btnAddFolderB_clicked(); break;
        case 15: _t->on_btnAddFileA_clicked(); break;
        case 16: _t->on_btnRemoveFileA_clicked(); break;
        case 17: _t->on_btnAddFolderA_clicked(); break;
        case 18: _t->on_chkDifferencing_clicked(); break;
        case 19: _t->on_chkModThreshold_clicked(); break;
        case 20: _t->on_chkDupThreshold_clicked(); break;
        case 21: _t->on_chkTruncThreshold_clicked(); break;
        case 22: _t->on_chkExtensionFile_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GMainWindow,
      qt_meta_data_GMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GMainWindow))
        return static_cast<void*>(const_cast< GMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
