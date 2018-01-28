#ifndef STUDENT_BORROWDETAIL_H
#define STUDENT_BORROWDETAIL_H

#include <QWidget>
#include "ui_student_borrowdetail.h"
#include<string>
using namespace std;

class student_borrowdetail : public QWidget
{
	Q_OBJECT

public:
	student_borrowdetail(QWidget *parent = 0);
	~student_borrowdetail();
	void InitThisPage();
	QString strtoqs(const string &s);
	string qstostr(const QString &s);
	QString chartoqs(char *p);
	void ReturnOrder();
protected:
	bool eventFilter(QObject *obj, QEvent *event);
private:
	Ui::student_borrowdetail ui;
};

#endif // STUDENT_BORROWDETAIL_H
