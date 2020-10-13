#include "mainwindowimpl.h"

//CONSTRUCTOR
MainWindowImpl::MainWindowImpl(QWidget * parent, Qt::WFlags f):QMainWindow(parent, f) {
	setupUi(this);
	//Validadores
	maxSize->setValidator(new QIntValidator(1,9999,parent));
	opacidadMarca->setValidator(new QIntValidator(1,100,parent));
	//Cargamos preferencias
	ResizerPreferences p;
	p.load();
	//Establecemos valores en la interfaz
	//Fotos
	directorioEntrada->setText(p.fotosDirEntrada);
	maxSize->setText(p.fotosMaxSize);
	//Marca agua
	checkMarca->setChecked((p.marcaHabilitado=="1")?true:false);
	comboHMarca->setCurrentIndex(p.marcaAlinH.toInt());
	comboVMarca->setCurrentIndex(p.marcaAlinV.toInt());
	fileMarca->setText(p.marcaRuta);
	opacidadMarca->setText(p.marcaOpacidad);
	//Pie
	checkPie->setChecked((p.pieHabilitado=="1")?true:false);
	comboHPie->setCurrentIndex(p.pieAlinH.toInt());
	comboVPie->setCurrentIndex(p.pieAlinV.toInt());
	filePie->setText(p.pieRuta);
	//Pie 2
	checkPie2->setChecked((p.pie2Habilitado=="1")?true:false);
	comboHPie2->setCurrentIndex(p.pie2AlinH.toInt());
	comboVPie2->setCurrentIndex(p.pie2AlinV.toInt());
	filePie2->setText(p.pie2Ruta);
	//Eventos iniciales
	this->on_opacidadMarca_editingFinished();
}



//CERRAR
void MainWindowImpl::closeEvent(QCloseEvent * event) {
	ResizerPreferences p;
	//Fotos
	p.fotosDirEntrada = directorioEntrada->text();
	p.fotosMaxSize = maxSize->text();
	//Marca agua
	p.marcaHabilitado = (checkMarca->isChecked())?"1":"0";
	p.marcaAlinH = QString::number(comboHMarca->currentIndex());
	p.marcaAlinV = QString::number(comboVMarca->currentIndex());
	p.marcaRuta = fileMarca->text();
	p.marcaOpacidad = opacidadMarca->text();
	//Pie
	p.pieHabilitado = (checkPie->isChecked())?"1":"0";
	p.pieAlinH = QString::number(comboHPie->currentIndex());
	p.pieAlinV = QString::number(comboVPie->currentIndex());
	p.pieRuta = filePie->text();
	//Pie 2
	p.pie2Habilitado = (checkPie2->isChecked())?"1":"0";
	p.pie2AlinH = QString::number(comboHPie2->currentIndex());
	p.pie2AlinV = QString::number(comboVPie2->currentIndex());
	p.pie2Ruta = filePie2->text();
	//Guardamos
	p.save();
}



//DIRECTORIO ENTRADA
void MainWindowImpl::on_abrirEntrada_clicked() {
	QString dir =
		QFileDialog::getExistingDirectory(
			this,
			"Directorio fotos",
			".",
			QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
	if(!dir.isNull()) {
		if(!dir.endsWith("/"))
			dir.append("/");
		directorioEntrada->setText(dir);
	}
}



//MARCA DE AGUA
//Habilitar
void MainWindowImpl::on_checkMarca_stateChanged(int state) {
	bool e = (bool)state;
	//Archivo
	labelFileMarca->setVisible(e);
	fileMarca->setVisible(e);
	abrirMarca->setVisible(e);
	//Alineacion
	comboHMarca->setVisible(e);
	comboHMarcaLabel->setVisible(e);
	comboVMarca->setVisible(e);
	comboVMarcaLabel->setVisible(e);
	//Opacidad
	labelOpacidadMarca->setVisible(e);
	opacidadMarca->setVisible(e);
	opacidadMarcaBar->setVisible(e);
}
//Archivo
void MainWindowImpl::on_abrirMarca_clicked() {
	QString file =
		QFileDialog::getOpenFileName(
			this,
			"Fichero marca de agua",
			".",
			"",
			0,
			QFileDialog::DontResolveSymlinks);
	if(!file.isNull())
		fileMarca->setText(file);
}
//Opacidad
void MainWindowImpl::on_opacidadMarca_editingFinished() {
	opacidadMarcaBar->setSliderPosition(opacidadMarca->text().toInt());
}
//Barra opacidad
void MainWindowImpl::on_opacidadMarcaBar_valueChanged(int value) {
	char* str = new char [2];
	sprintf(str,"%d",value);
	opacidadMarca->setText(str);
}



//FIRMA
//Habilitar
void MainWindowImpl::on_checkPie_stateChanged(int state) {
	bool e = (bool)state;
	//Archivo
	labelFilePie->setVisible(e);
	filePie->setVisible(e);
	abrirPie->setVisible(e);
	//Alineacion
	comboHPie->setVisible(e);
	comboHPieLabel->setVisible(e);
	comboVPie->setVisible(e);
	comboVPieLabel->setVisible(e);
}
//Archivo
void MainWindowImpl::on_abrirPie_clicked() {
	QString file =
		QFileDialog::getOpenFileName(
			this,
			"Fichero firma",
			".",
			"",
			0,
			QFileDialog::DontResolveSymlinks);
	if(!file.isNull())
		filePie->setText(file);
}



//FIRMA 2
//Habilitar
void MainWindowImpl::on_checkPie2_stateChanged(int state) {
	bool e = (bool)state;
	//Archivo
	labelFilePie2->setVisible(e);
	filePie2->setVisible(e);
	abrirPie2->setVisible(e);
	//Alineacion
	comboHPie2->setVisible(e);
	comboHPie2Label->setVisible(e);
	comboVPie2->setVisible(e);
	comboVPie2Label->setVisible(e);
}
//Archivo
void MainWindowImpl::on_abrirPie2_clicked() {
	QString file =
		QFileDialog::getOpenFileName(
			this,
			"Fichero firma",
			".",
			"",
			0,
			QFileDialog::DontResolveSymlinks);
	if(!file.isNull())
		filePie2->setText(file);
}



//EJECUTAR
void MainWindowImpl::on_ejecutar_clicked() {
	//Config
	ResizerConfig config = this->cargarConfig(maxSize->text()+"/");
	if(!this->configOK(config)) {
		return;
	}
	//Inhabilitar botones
	this->habilitarCampos(false);
	//Fotos
	QDir dirEntrada = QDir(config.dirEntrada);
	QStringList fotos = dirEntrada.entryList((QStringList() << "*.jpg" << "*.JPG"), QDir::Readable|QDir::Files);
	int i=0, numFotos=fotos.size();
	char* str = new char [50];
	//Procesado
	foreach(QString fotoName,fotos) {
		//Info
		float porcentaje = ((float)i++/(float)numFotos)*100;
		sprintf(str,"%.1f por ciento",porcentaje);
		statusbar->showMessage(str);
		QImage foto = this->procesarFoto(fotoName,config);
		if(foto.isNull())
			statusbar->showMessage("Mala foto: "+fotoName);
	}
	statusbar->showMessage("Finalizado");
	//Habilitar botones
	this->habilitarCampos(true);
}




void MainWindowImpl::on_probar_clicked() {
	//Config
	ResizerConfig config = this->cargarConfig(maxSize->text()+"sample/");
	if(!this->configOK(config)) {
		return;
	}
	//Inhabilitar
	this->habilitarCampos(false);
	//Foto
	QDir dirEntrada = QDir(config.dirEntrada);
	QStringList fotos = dirEntrada.entryList((QStringList() << "*.jpg" << "*.JPG"), QDir::Readable|QDir::Files);
	//Procesar
	QImage foto = this->procesarFoto(fotos[0],config);
	if(foto.isNull())
		statusbar->showMessage("Mala foto: "+fotos[0]);
	statusbar->showMessage("Finalizado");
	//Habilitar botones
	this->habilitarCampos(true);
}







ResizerConfig MainWindowImpl::cargarConfig(QString salida) {
	ResizerConfig resizer;
	//Fotos
	resizer.dirEntrada = directorioEntrada->text();
	resizer.dirSalida = directorioEntrada->text()+salida;
	QDir dirSalida;
	dirSalida.mkpath(resizer.dirSalida);
	resizer.maxSizeFoto = maxSize->text().toInt();
	//Marca de agua
	resizer.marca.procesar = (bool)checkMarca->isChecked();
	if(resizer.marca.procesar) {
		resizer.marca.imagen.load(fileMarca->text());
		resizer.marca.opacidad = opacidadMarca->text().toInt();
		resizer.marca.alignH = comboHMarca->currentIndex();
		resizer.marca.alignV = comboVMarca->currentIndex();
	}
	//Firma
	resizer.pie.procesar = (bool)checkPie->isChecked();
	if(resizer.pie.procesar) {
		resizer.pie.imagen.load(filePie->text());
		resizer.pie.opacidad = 100;
		resizer.pie.alignH = comboHPie->currentIndex();
		resizer.pie.alignV = comboVPie->currentIndex();
	}
	//Firma 2
	resizer.pie2.procesar = (bool)checkPie2->isChecked();
	if(resizer.pie2.procesar) {
		resizer.pie2.imagen.load(filePie2->text());
		resizer.pie2.opacidad = 100;
		resizer.pie2.alignH = comboHPie2->currentIndex();
		resizer.pie2.alignV = comboVPie2->currentIndex();
	}
	//Return
	return resizer;
}





bool MainWindowImpl::configOK(ResizerConfig config) {
	//Fotos
	if(config.dirEntrada.isEmpty()) {
		statusbar->showMessage("No dir entrada");
		return false;
	}
	if(config.maxSizeFoto<=0) {
		statusbar->showMessage("Mal tamaño");
		return false;
	}
	if(config.marca.procesar) {
		if(config.marca.imagen.isNull()) {
			statusbar->showMessage("Mala imagen marca agua");
			return false;
		}
		if(config.marca.opacidad<=0) {
			statusbar->showMessage("Mala opacidad marca agua");
			return false;
		}
	}
	if(config.pie.procesar) {
		if(config.pie.imagen.isNull()) {
			statusbar->showMessage("Mala imagen pie");
			return false;
		}
	}
	if(config.pie2.procesar) {
		if(config.pie2.imagen.isNull()) {
			statusbar->showMessage("Mala imagen pie 2");
			return false;
		}
	}
	return true;
}





QImage MainWindowImpl::procesarFoto(QString fotoName, ResizerConfig config) {
	QImage foto;
	foto.load(config.dirEntrada+fotoName);
	if(!foto.isNull()) {
		//Escalado de la foto
		if (foto.width() > foto.height())
			foto = foto.scaledToWidth(config.maxSizeFoto);
		else
			foto = foto.scaledToHeight(config.maxSizeFoto);
		//Marca de agua
		if(config.marca.procesar)
			foto = config.marca.fusionar(foto);
		//Pie
		if(config.pie.procesar)
			foto = config.pie.fusionar(foto);
		//Pie
		if(config.pie2.procesar)
			foto = config.pie2.fusionar(foto);
		//Guardar
		foto.save(config.dirSalida+fotoName.toLower());
	}
	return foto;
}




void MainWindowImpl::habilitarCampos(bool habilitar) {
	this->setEnabled(habilitar);
}
