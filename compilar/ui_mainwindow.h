/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Fri Oct 16 20:17:40 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *ejecutar;
    QLineEdit *directorioEntrada;
    QPushButton *abrirEntrada;
    QLineEdit *maxSize;
    QLineEdit *fileMarca;
    QPushButton *abrirMarca;
    QLineEdit *filePie;
    QPushButton *abrirPie;
    QLineEdit *opacidadMarca;
    QLabel *labelDirectorioEntrada;
    QLabel *labelSeccionFotos;
    QFrame *line1;
    QLabel *labelMaxSize;
    QFrame *line2;
    QLabel *labelFileMarca;
    QLabel *labelOpacidadMarca;
    QFrame *line3;
    QLabel *labelFilePie;
    QPushButton *probar;
    QSlider *opacidadMarcaBar;
    QCheckBox *checkMarca;
    QCheckBox *checkPie;
    QComboBox *comboVMarca;
    QComboBox *comboHMarca;
    QLabel *comboVMarcaLabel;
    QLabel *comboHMarcaLabel;
    QComboBox *comboVPie;
    QLabel *comboHPieLabel;
    QComboBox *comboHPie;
    QLabel *comboVPieLabel;
    QComboBox *comboVPie2;
    QLineEdit *filePie2;
    QFrame *line3_2;
    QPushButton *abrirPie2;
    QCheckBox *checkPie2;
    QComboBox *comboHPie2;
    QLabel *comboVPie2Label;
    QLabel *labelFilePie2;
    QLabel *comboHPie2Label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(419, 595);
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    ejecutar = new QPushButton(centralwidget);
    ejecutar->setObjectName(QString::fromUtf8("ejecutar"));
    ejecutar->setGeometry(QRect(90, 500, 80, 27));
    directorioEntrada = new QLineEdit(centralwidget);
    directorioEntrada->setObjectName(QString::fromUtf8("directorioEntrada"));
    directorioEntrada->setGeometry(QRect(90, 40, 291, 21));
    abrirEntrada = new QPushButton(centralwidget);
    abrirEntrada->setObjectName(QString::fromUtf8("abrirEntrada"));
    abrirEntrada->setGeometry(QRect(390, 40, 27, 21));
    maxSize = new QLineEdit(centralwidget);
    maxSize->setObjectName(QString::fromUtf8("maxSize"));
    maxSize->setGeometry(QRect(130, 70, 61, 21));
    fileMarca = new QLineEdit(centralwidget);
    fileMarca->setObjectName(QString::fromUtf8("fileMarca"));
    fileMarca->setEnabled(true);
    fileMarca->setGeometry(QRect(80, 150, 301, 21));
    fileMarca->setReadOnly(false);
    abrirMarca = new QPushButton(centralwidget);
    abrirMarca->setObjectName(QString::fromUtf8("abrirMarca"));
    abrirMarca->setEnabled(true);
    abrirMarca->setGeometry(QRect(390, 150, 27, 21));
    filePie = new QLineEdit(centralwidget);
    filePie->setObjectName(QString::fromUtf8("filePie"));
    filePie->setGeometry(QRect(80, 290, 301, 21));
    abrirPie = new QPushButton(centralwidget);
    abrirPie->setObjectName(QString::fromUtf8("abrirPie"));
    abrirPie->setGeometry(QRect(390, 290, 27, 21));
    opacidadMarca = new QLineEdit(centralwidget);
    opacidadMarca->setObjectName(QString::fromUtf8("opacidadMarca"));
    opacidadMarca->setEnabled(true);
    opacidadMarca->setGeometry(QRect(100, 210, 61, 21));
    labelDirectorioEntrada = new QLabel(centralwidget);
    labelDirectorioEntrada->setObjectName(QString::fromUtf8("labelDirectorioEntrada"));
    labelDirectorioEntrada->setGeometry(QRect(10, 40, 71, 18));
    labelSeccionFotos = new QLabel(centralwidget);
    labelSeccionFotos->setObjectName(QString::fromUtf8("labelSeccionFotos"));
    labelSeccionFotos->setGeometry(QRect(10, 10, 71, 18));
    QFont font;
    font.setBold(true);
    font.setWeight(75);
    labelSeccionFotos->setFont(font);
    line1 = new QFrame(centralwidget);
    line1->setObjectName(QString::fromUtf8("line1"));
    line1->setGeometry(QRect(0, 20, 431, 20));
    line1->setFrameShape(QFrame::HLine);
    line1->setFrameShadow(QFrame::Sunken);
    labelMaxSize = new QLabel(centralwidget);
    labelMaxSize->setObjectName(QString::fromUtf8("labelMaxSize"));
    labelMaxSize->setGeometry(QRect(10, 70, 111, 18));
    line2 = new QFrame(centralwidget);
    line2->setObjectName(QString::fromUtf8("line2"));
    line2->setGeometry(QRect(0, 130, 421, 20));
    line2->setFrameShape(QFrame::HLine);
    line2->setFrameShadow(QFrame::Sunken);
    labelFileMarca = new QLabel(centralwidget);
    labelFileMarca->setObjectName(QString::fromUtf8("labelFileMarca"));
    labelFileMarca->setGeometry(QRect(10, 150, 71, 18));
    labelOpacidadMarca = new QLabel(centralwidget);
    labelOpacidadMarca->setObjectName(QString::fromUtf8("labelOpacidadMarca"));
    labelOpacidadMarca->setGeometry(QRect(10, 210, 71, 18));
    line3 = new QFrame(centralwidget);
    line3->setObjectName(QString::fromUtf8("line3"));
    line3->setGeometry(QRect(0, 270, 431, 20));
    line3->setFrameShape(QFrame::HLine);
    line3->setFrameShadow(QFrame::Sunken);
    labelFilePie = new QLabel(centralwidget);
    labelFilePie->setObjectName(QString::fromUtf8("labelFilePie"));
    labelFilePie->setGeometry(QRect(10, 290, 71, 18));
    probar = new QPushButton(centralwidget);
    probar->setObjectName(QString::fromUtf8("probar"));
    probar->setGeometry(QRect(250, 500, 80, 27));
    opacidadMarcaBar = new QSlider(centralwidget);
    opacidadMarcaBar->setObjectName(QString::fromUtf8("opacidadMarcaBar"));
    opacidadMarcaBar->setEnabled(true);
    opacidadMarcaBar->setGeometry(QRect(180, 210, 231, 21));
    opacidadMarcaBar->setMaximum(100);
    opacidadMarcaBar->setOrientation(Qt::Horizontal);
    checkMarca = new QCheckBox(centralwidget);
    checkMarca->setObjectName(QString::fromUtf8("checkMarca"));
    checkMarca->setGeometry(QRect(10, 110, 141, 23));
    checkMarca->setFont(font);
    checkMarca->setChecked(true);
    checkPie = new QCheckBox(centralwidget);
    checkPie->setObjectName(QString::fromUtf8("checkPie"));
    checkPie->setGeometry(QRect(10, 250, 98, 23));
    checkPie->setFont(font);
    checkPie->setChecked(true);
    comboVMarca = new QComboBox(centralwidget);
    comboVMarca->setObjectName(QString::fromUtf8("comboVMarca"));
    comboVMarca->setEnabled(false);
    comboVMarca->setGeometry(QRect(320, 180, 88, 21));
    comboHMarca = new QComboBox(centralwidget);
    comboHMarca->setObjectName(QString::fromUtf8("comboHMarca"));
    comboHMarca->setEnabled(false);
    comboHMarca->setGeometry(QRect(110, 180, 88, 21));
    comboVMarcaLabel = new QLabel(centralwidget);
    comboVMarcaLabel->setObjectName(QString::fromUtf8("comboVMarcaLabel"));
    comboVMarcaLabel->setGeometry(QRect(220, 180, 101, 18));
    comboHMarcaLabel = new QLabel(centralwidget);
    comboHMarcaLabel->setObjectName(QString::fromUtf8("comboHMarcaLabel"));
    comboHMarcaLabel->setGeometry(QRect(10, 180, 101, 18));
    comboVPie = new QComboBox(centralwidget);
    comboVPie->setObjectName(QString::fromUtf8("comboVPie"));
    comboVPie->setEnabled(false);
    comboVPie->setGeometry(QRect(320, 320, 88, 21));
    comboHPieLabel = new QLabel(centralwidget);
    comboHPieLabel->setObjectName(QString::fromUtf8("comboHPieLabel"));
    comboHPieLabel->setGeometry(QRect(10, 320, 101, 18));
    comboHPie = new QComboBox(centralwidget);
    comboHPie->setObjectName(QString::fromUtf8("comboHPie"));
    comboHPie->setEnabled(false);
    comboHPie->setGeometry(QRect(110, 320, 88, 21));
    comboVPieLabel = new QLabel(centralwidget);
    comboVPieLabel->setObjectName(QString::fromUtf8("comboVPieLabel"));
    comboVPieLabel->setGeometry(QRect(220, 320, 101, 18));
    comboVPie2 = new QComboBox(centralwidget);
    comboVPie2->setObjectName(QString::fromUtf8("comboVPie2"));
    comboVPie2->setEnabled(false);
    comboVPie2->setGeometry(QRect(320, 440, 88, 21));
    filePie2 = new QLineEdit(centralwidget);
    filePie2->setObjectName(QString::fromUtf8("filePie2"));
    filePie2->setGeometry(QRect(80, 410, 301, 21));
    line3_2 = new QFrame(centralwidget);
    line3_2->setObjectName(QString::fromUtf8("line3_2"));
    line3_2->setGeometry(QRect(0, 390, 431, 20));
    line3_2->setFrameShape(QFrame::HLine);
    line3_2->setFrameShadow(QFrame::Sunken);
    abrirPie2 = new QPushButton(centralwidget);
    abrirPie2->setObjectName(QString::fromUtf8("abrirPie2"));
    abrirPie2->setGeometry(QRect(390, 410, 27, 21));
    checkPie2 = new QCheckBox(centralwidget);
    checkPie2->setObjectName(QString::fromUtf8("checkPie2"));
    checkPie2->setGeometry(QRect(10, 370, 98, 23));
    checkPie2->setFont(font);
    checkPie2->setChecked(true);
    comboHPie2 = new QComboBox(centralwidget);
    comboHPie2->setObjectName(QString::fromUtf8("comboHPie2"));
    comboHPie2->setEnabled(false);
    comboHPie2->setGeometry(QRect(110, 440, 88, 21));
    comboVPie2Label = new QLabel(centralwidget);
    comboVPie2Label->setObjectName(QString::fromUtf8("comboVPie2Label"));
    comboVPie2Label->setGeometry(QRect(220, 440, 101, 18));
    labelFilePie2 = new QLabel(centralwidget);
    labelFilePie2->setObjectName(QString::fromUtf8("labelFilePie2"));
    labelFilePie2->setGeometry(QRect(10, 410, 71, 18));
    comboHPie2Label = new QLabel(centralwidget);
    comboHPie2Label->setObjectName(QString::fromUtf8("comboHPie2Label"));
    comboHPie2Label->setGeometry(QRect(10, 440, 101, 18));
    MainWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 419, 21));
    MainWindow->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    MainWindow->setStatusBar(statusbar);

#ifndef QT_NO_SHORTCUT
    labelDirectorioEntrada->setBuddy(directorioEntrada);
#endif // QT_NO_SHORTCUT


    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
    ejecutar->setText(QApplication::translate("MainWindow", "Iniciar", 0, QApplication::UnicodeUTF8));
    abrirEntrada->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
    abrirMarca->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
    abrirPie->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
    labelDirectorioEntrada->setText(QApplication::translate("MainWindow", "Directorio", 0, QApplication::UnicodeUTF8));
    labelSeccionFotos->setText(QApplication::translate("MainWindow", "Fotos", 0, QApplication::UnicodeUTF8));
    labelMaxSize->setText(QApplication::translate("MainWindow", "Tama\303\261o m\303\241x.", 0, QApplication::UnicodeUTF8));
    labelFileMarca->setText(QApplication::translate("MainWindow", "Im\303\241gen", 0, QApplication::UnicodeUTF8));
    labelOpacidadMarca->setText(QApplication::translate("MainWindow", "Opacidad", 0, QApplication::UnicodeUTF8));
    labelFilePie->setText(QApplication::translate("MainWindow", "Im\303\241gen", 0, QApplication::UnicodeUTF8));
    probar->setText(QApplication::translate("MainWindow", "Prueba", 0, QApplication::UnicodeUTF8));
    checkMarca->setText(QApplication::translate("MainWindow", "Marca de agua", 0, QApplication::UnicodeUTF8));
    checkPie->setText(QApplication::translate("MainWindow", "Firma 1", 0, QApplication::UnicodeUTF8));
    comboVMarca->clear();
    comboVMarca->insertItems(0, QStringList()
     << QApplication::translate("MainWindow", "Arriba", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Medio", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Abajo", 0, QApplication::UnicodeUTF8)
    );
    comboHMarca->clear();
    comboHMarca->insertItems(0, QStringList()
     << QApplication::translate("MainWindow", "Izquierda", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Centro", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Derecha", 0, QApplication::UnicodeUTF8)
    );
    comboVMarcaLabel->setText(QApplication::translate("MainWindow", "Alineaci\303\263n V.", 0, QApplication::UnicodeUTF8));
    comboHMarcaLabel->setText(QApplication::translate("MainWindow", "Alineaci\303\263n H.", 0, QApplication::UnicodeUTF8));
    comboVPie->clear();
    comboVPie->insertItems(0, QStringList()
     << QApplication::translate("MainWindow", "Arriba", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Medio", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Abajo", 0, QApplication::UnicodeUTF8)
    );
    comboHPieLabel->setText(QApplication::translate("MainWindow", "Alineaci\303\263n H.", 0, QApplication::UnicodeUTF8));
    comboHPie->clear();
    comboHPie->insertItems(0, QStringList()
     << QApplication::translate("MainWindow", "Izquierda", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Centro", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Derecha", 0, QApplication::UnicodeUTF8)
    );
    comboVPieLabel->setText(QApplication::translate("MainWindow", "Alineaci\303\263n V.", 0, QApplication::UnicodeUTF8));
    comboVPie2->clear();
    comboVPie2->insertItems(0, QStringList()
     << QApplication::translate("MainWindow", "Arriba", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Medio", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Abajo", 0, QApplication::UnicodeUTF8)
    );
    abrirPie2->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
    checkPie2->setText(QApplication::translate("MainWindow", "Firma 2", 0, QApplication::UnicodeUTF8));
    comboHPie2->clear();
    comboHPie2->insertItems(0, QStringList()
     << QApplication::translate("MainWindow", "Izquierda", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Centro", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Derecha", 0, QApplication::UnicodeUTF8)
    );
    comboVPie2Label->setText(QApplication::translate("MainWindow", "Alineaci\303\263n V.", 0, QApplication::UnicodeUTF8));
    labelFilePie2->setText(QApplication::translate("MainWindow", "Im\303\241gen", 0, QApplication::UnicodeUTF8));
    comboHPie2Label->setText(QApplication::translate("MainWindow", "Alineaci\303\263n H.", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
