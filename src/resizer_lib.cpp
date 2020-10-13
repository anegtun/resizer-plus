#include "resizer_lib.h"

/************************/
/***** ResizerCoord *****/
/************************/

void ResizerCoord::calcularCoord(int align, int len1, int len2) {
	//Alineacion horizontal
	switch(align) {
		case ResizerCoord::ALIGN_INIT:
			this->offset = 0;
			break;
		case ResizerCoord::ALIGN_CENTER:
			this->offset = (len1-len2)/2;
			break;
		case ResizerCoord::ALIGN_END:
			this->offset = len1-len2;
			break;
	}
	if(this->offset > 0) {
		//Foto > imagen
		this->init = this->offset;
		this->fin = this->init + len2;
	} else {
		//Foto < imagen
		this->init = 0;
		this->fin = len1;
	}
}





/*************************/
/***** ResizerImagen *****/
/*************************/

QImage ResizerImagen::fusionar(QImage foto) {
	ResizerCoord coordX, coordY;
	coordX.calcularCoord(this->alignH, foto.width(), this->imagen.width());
	coordY.calcularCoord(this->alignV, foto.height(), this->imagen.height());
	
	//Fusion
	for(int x=coordX.init; x<coordX.fin; x++) {
		for(int y=coordY.init; y<coordY.fin; y++) {
			QRgb pixelFoto = foto.pixel(x,y);
			QRgb pixelImg = this->imagen.pixel(x-coordX.offset, y-coordY.offset);
			int aI = qAlpha(pixelImg);
			if(aI>0) {
				float aPercent = (((float)aI)/255.0)*(((float)this->opacidad)/100.0);
				int rI = (int)(((float)qRed(pixelImg))*aPercent);
				int gI = (int)(((float)qGreen(pixelImg))*aPercent);
				int bI = (int)(((float)qBlue(pixelImg))*aPercent);
				int rF = (int)(((float)qRed(pixelFoto))*(1.0-aPercent));
				int gF = (int)(((float)qGreen(pixelFoto))*(1.0-aPercent));
				int bF = (int)(((float)qBlue(pixelFoto))*(1.0-aPercent));
				int r = rF + rI;
				int g = gF + gI;
				int b = bF + bI;
				foto.setPixel(x, y, qRgb((r>255)?255:r, (g>255)?255:g, (b>255)?255:b));
			}
		}
	}
	
	return foto;
}





/******************************/
/***** ResizerPreferences *****/
/******************************/

void ResizerPreferences::load() {
	//Abrimos
	QFile file("preferences");
	if(!file.open(QIODevice::ReadOnly))
		return;
	//Leemos
	QTextStream in(&file);
	while(!in.atEnd()) {
		//Leemos linea y partimos en clave/valor
		QStringList list = in.readLine().split("=");
		if(list.size()>1) {
			if     (list.at(0)=="fotos.dirEntrada") this->fotosDirEntrada = list.at(1).trimmed();
			else if(list.at(0)=="fotos.maxSize")    this->fotosMaxSize    = list.at(1).trimmed();
			else if(list.at(0)=="marca.habilitado") this->marcaHabilitado = list.at(1).trimmed();
			else if(list.at(0)=="marca.alin.h")     this->marcaAlinH      = list.at(1).trimmed();
			else if(list.at(0)=="marca.alin.v")     this->marcaAlinV      = list.at(1).trimmed();
			else if(list.at(0)=="marca.ruta")       this->marcaRuta       = list.at(1).trimmed();
			else if(list.at(0)=="marca.opacidad")   this->marcaOpacidad   = list.at(1).trimmed();
			else if(list.at(0)=="pie.habilitado")   this->pieHabilitado   = list.at(1).trimmed();
			else if(list.at(0)=="pie.alin.h")       this->pieAlinH        = list.at(1).trimmed();
			else if(list.at(0)=="pie.alin.v")       this->pieAlinV        = list.at(1).trimmed();
			else if(list.at(0)=="pie.ruta")         this->pieRuta         = list.at(1).trimmed();
			else if(list.at(0)=="pie2.habilitado")  this->pie2Habilitado  = list.at(1).trimmed();
			else if(list.at(0)=="pie2.alin.h")      this->pie2AlinH       = list.at(1).trimmed();
			else if(list.at(0)=="pie2.alin.v")      this->pie2AlinV       = list.at(1).trimmed();
			else if(list.at(0)=="pie2.ruta")        this->pie2Ruta        = list.at(1).trimmed();
		}
	}
	file.close();
	//Valores defecto
	/*if(this->marcaAlinH.isEmpty()) this->marcaAlinH = "1";
	if(this->marcaAlinV.isEmpty()) this->marcaAlinV = "1";
	if(this->pieAlinH.isEmpty())   this->pieAlinH   = "0";
	if(this->pieAlinV.isEmpty())   this->pieAlinV   = "2";
	if(this->pie2AlinH.isEmpty())  this->pie2AlinH  = "2";
	if(this->pie2AlinV.isEmpty())  this->pie2AlinV  = "2";*/
	this->marcaAlinH = "1";
	this->marcaAlinV = "1";
	this->pieAlinH   = "0";
	this->pieAlinV   = "2";
	this->pie2AlinH  = "2";
	this->pie2AlinV  = "2";
}

void ResizerPreferences::save() {
	//Abrimos
	QFile file("preferences");
	if(!file.open(QIODevice::WriteOnly))
		return;
	//Escribimos
	QTextStream out(&file);
	out << "fotos.dirEntrada=" << this->fotosDirEntrada << endl;
	out << "fotos.maxSize="    << this->fotosMaxSize    << endl;
	out << "marca.habilitado=" << this->marcaHabilitado << endl;
	out << "marca.alin.h="     << this->marcaAlinH      << endl;
	out << "marca.alin.v="     << this->marcaAlinV      << endl;
	out << "marca.ruta="       << this->marcaRuta       << endl;
	out << "marca.opacidad="   << this->marcaOpacidad   << endl;
	out << "pie.habilitado="   << this->pieHabilitado   << endl;
	out << "pie.alin.h="       << this->pieAlinH        << endl;
	out << "pie.alin.v="       << this->pieAlinV        << endl;
	out << "pie.ruta="         << this->pieRuta         << endl;
	out << "pie2.habilitado="  << this->pie2Habilitado  << endl;
	out << "pie2.alin.h="      << this->pie2AlinH       << endl;
	out << "pie2.alin.v="      << this->pie2AlinV       << endl;
	out << "pie2.ruta="        << this->pie2Ruta        << endl;
	out.flush();
	//Cerramos
	file.close();
}
