#ifndef INFOIMPL_H
#define INFOIMPL_H
//
#include <QDialog>
#include "ui_info.h"
//
class InfoImpl : public QDialog, public Ui::Dialog
{
Q_OBJECT
public:
	InfoImpl( QWidget * parent = 0, Qt::WFlags f = 0 );
private slots:
};
#endif





