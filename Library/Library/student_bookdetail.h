#ifndef STUDENT_BOOKDETAIL_H
#define STUDENT_BOOKDETAIL_H

#include <QWidget>
#include "ui_student_bookdetail.h"
#include<string>
using namespace std;

class student_bookDetail : public QWidget
{
	Q_OBJECT

public:
	student_bookDetail(QWidget *parent = 0);
	~student_bookDetail();
	void InitThisPage();
	QString strtoqs(const string &s);
	string qstostr(const QString &s);
	QString chartoqs(char *p);

protected:
	bool eventFilter(QObject *obj, QEvent *event);
private:
	Ui::student_bookDetail ui;
};

#endif // STUDENT_BOOKDETAIL_H
