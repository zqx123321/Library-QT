#ifndef ADMIN_BOOKUPDATE_H
#define ADMIN_BOOKUPDATE_H

#include <QWidget>
#include "ui_admin_bookupdate.h"

class admin_bookupdate : public QWidget
{
	Q_OBJECT

public:
	admin_bookupdate(QWidget *parent = 0);
	~admin_bookupdate();

private:
	Ui::admin_bookupdate ui;
};

#endif // ADMIN_BOOKUPDATE_H
