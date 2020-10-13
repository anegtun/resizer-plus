#ifndef MAINWINDOWIMPL_H
#define MAINWINDOWIMPL_H
//
#include <QMainWindow>
#include <QFileDialog>
#include <QIntValidator>
#include "ui_mainwindow.h"

#include "infoimpl.h"
#include "resizer_lib.h"
//
class MainWindowImpl : public QMainWindow, public Ui::MainWindow
{
	Q_OBJECT
	InfoImpl info;
	public:
		MainWindowImpl( QWidget * parent = 0, Qt::WFlags f = 0 );
	protected:
		void closeEvent(QCloseEvent * event);
	private:
		ResizerConfig cargarConfig(QString salida);
		bool configOK(ResizerConfig config);
		QImage procesarFoto(QString fotoName, ResizerConfig config);
		void habilitarCampos(bool habilitar);
	private slots:
		//Ficheros
		void on_abrirEntrada_clicked();
		//Marca agua
		void on_checkMarca_stateChanged(int state);
		void on_abrirMarca_clicked();
		void on_opacidadMarca_editingFinished();
		void on_opacidadMarcaBar_valueChanged(int value);
		//Firma
		void on_checkPie_stateChanged(int state);
		void on_abrirPie_clicked();
		//Firma
		void on_checkPie2_stateChanged(int state);
		void on_abrirPie2_clicked();
		//Botonera
		void on_ejecutar_clicked();
		void on_probar_clicked();
};

#endif
