#ifndef STUDENT_ORDER_H
#define STUDENT_ORDER_H

#include <QWidget>
#include "ui_student_order.h"

class student_order : public QWidget
{
	Q_OBJECT

public:
	student_order(QWidget *parent = 0);
	~student_order();

private:
	Ui::student_order ui;
};

#endif // STUDENT_ORDER_H
