#ifndef STUDENT_REPAY_H
#define STUDENT_REPAY_H

#include <QWidget>
#include "ui_student_repay.h"

class student_repay : public QWidget
{
	Q_OBJECT

public:
	student_repay(QWidget *parent = 0);
	~student_repay();
	void InitThisPage();
protected:
	bool eventFilter(QObject *obj, QEvent *event);

private:
	Ui::student_repay ui;
};

#endif // STUDENT_REPAY_H
