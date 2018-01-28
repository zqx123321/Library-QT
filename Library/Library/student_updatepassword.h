#ifndef STUDENT_UPDATEPASSWORD_H
#define STUDENT_UPDATEPASSWORD_H

#include <QWidget>
#include "ui_student_updatepassword.h"
#include<string>
using namespace std;

class student_updatePassword : public QWidget
{
	Q_OBJECT

public:
	student_updatePassword(QWidget *parent = 0);
	~student_updatePassword();
	QString strtoqs(const string &s);
	string qstostr(const QString &s);
	void InitThisPage();

protected:
	bool eventFilter(QObject *obj, QEvent *event);

private:
	Ui::student_updatePassword ui;
};

#endif // STUDENT_UPDATEPASSWORD_H
