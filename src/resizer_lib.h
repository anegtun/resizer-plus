#ifndef __RESIZER_LIB_H__
#define __RESIZER_LIB_H__

#include <qfile.h>
#include <QStringList>
#include <QImage>
#include <QFile>
#include <QTextStream>



class ResizerCoord {
	public:
		static const int ALIGN_INIT = 0;
		static const int ALIGN_CENTER = 1;
		static const int ALIGN_END = 2;
		
		int init;
		int fin;
		int offset;
		
		void calcularCoord(int align, int len1, int len2);
};



class ResizerImagen {
	public:
		static const int ALIGN_UP     = ResizerCoord::ALIGN_INIT;
		static const int ALIGN_MIDDLE = ResizerCoord::ALIGN_CENTER;
		static const int ALIGN_DOWN   = ResizerCoord::ALIGN_END;
		static const int ALIGN_LEFT   = ResizerCoord::ALIGN_INIT;
		static const int ALIGN_CENTER = ResizerCoord::ALIGN_CENTER;
		static const int ALIGN_RIGHT  = ResizerCoord::ALIGN_END;
		
		QImage imagen;
		int opacidad;
		bool procesar;
		int alignH;
		int alignV;
		
		QImage fusionar(QImage foto);
};



class ResizerConfig {
	public:
		int maxSizeFoto;
		ResizerImagen marca;
		ResizerImagen pie;
		ResizerImagen pie2;
		QString dirEntrada;
		QString dirSalida;
};



class ResizerPreferences {
	public:
		//Fotos
		QString fotosDirEntrada;
		QString fotosMaxSize;
		//Marca agua
		QString marcaHabilitado;
		QString marcaAlinH;
		QString marcaAlinV;
		QString marcaRuta;
		QString marcaOpacidad;
		//Pie
		QString pieHabilitado;
		QString pieAlinH;
		QString pieAlinV;
		QString pieRuta;
		//Pie
		QString pie2Habilitado;
		QString pie2AlinH;
		QString pie2AlinV;
		QString pie2Ruta;
		
		void load();
		void save();
};

#endif // __RESIZER_LIB_H__
