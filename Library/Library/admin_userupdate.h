#ifndef ADMIN_USERUPDATE_H
#define ADMIN_USERUPDATE_H

#include <QWidget>
#include "ui_admin_userupdate.h"

class admin_userupdate : public QWidget
{
	Q_OBJECT

public:
	admin_userupdate(QWidget *parent = 0);
	~admin_userupdate();

private:
	Ui::admin_userupdate ui;
};

#endif // ADMIN_USERUPDATE_H
