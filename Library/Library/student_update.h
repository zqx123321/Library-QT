#ifndef STUDENT_UPDATE_H
#define STUDENT_UPDATE_H

#include <QWidget>
#include "ui_student_update.h"
#include<string>
#include<iostream>
using namespace std;

class student_update : public QWidget
{
	Q_OBJECT

public:
	student_update(QWidget *parent = 0);
	~student_update();
	QString strtoqs(const string &s);
	string qstostr(const QString &s);
	QString chartoqs(char *p);
	void InitThisPage();
	void openFileDiag();

protected:
	bool eventFilter(QObject *obj, QEvent *event);

private:
	Ui::student_update ui;
	bool isChangeIcon;
	QString filename;
	QPixmap* img;
};

#endif // STUDENT_UPDATE_H
