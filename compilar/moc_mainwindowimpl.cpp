/****************************************************************************
** Meta object code from reading C++ file 'mainwindowimpl.h'
**
** Created: Fri Oct 16 20:17:44 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwindowimpl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindowimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindowImpl[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      48,   42,   15,   15, 0x08,
      80,   15,   15,   15, 0x08,
     104,   15,   15,   15, 0x08,
     145,  139,   15,   15, 0x08,
     183,   42,   15,   15, 0x08,
     213,   15,   15,   15, 0x08,
     235,   42,   15,   15, 0x08,
     266,   15,   15,   15, 0x08,
     289,   15,   15,   15, 0x08,
     311,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindowImpl[] = {
    "MainWindowImpl\0\0on_abrirEntrada_clicked()\0"
    "state\0on_checkMarca_stateChanged(int)\0"
    "on_abrirMarca_clicked()\0"
    "on_opacidadMarca_editingFinished()\0"
    "value\0on_opacidadMarcaBar_valueChanged(int)\0"
    "on_checkPie_stateChanged(int)\0"
    "on_abrirPie_clicked()\0"
    "on_checkPie2_stateChanged(int)\0"
    "on_abrirPie2_clicked()\0on_ejecutar_clicked()\0"
    "on_probar_clicked()\0"
};

const QMetaObject MainWindowImpl::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindowImpl,
      qt_meta_data_MainWindowImpl, 0 }
};

const QMetaObject *MainWindowImpl::metaObject() const
{
    return &staticMetaObject;
}

void *MainWindowImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowImpl))
        return static_cast<void*>(const_cast< MainWindowImpl*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< MainWindowImpl*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindowImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_abrirEntrada_clicked(); break;
        case 1: on_checkMarca_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_abrirMarca_clicked(); break;
        case 3: on_opacidadMarca_editingFinished(); break;
        case 4: on_opacidadMarcaBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: on_checkPie_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: on_abrirPie_clicked(); break;
        case 7: on_checkPie2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: on_abrirPie2_clicked(); break;
        case 9: on_ejecutar_clicked(); break;
        case 10: on_probar_clicked(); break;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
