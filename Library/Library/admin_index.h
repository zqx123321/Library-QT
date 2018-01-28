#ifndef ADMIN_INDEX_H
#define ADMIN_INDEX_H

#include "ui_admin_index.h"
#include <QWidget>
#include<string>
#include<iostream>
using namespace std;

class admin_index : public QWidget
{
	Q_OBJECT

public:
	admin_index(QWidget *parent = 0);
	~admin_index();
	QString strtoqs(const string &s);
	string qstostr(const QString &s);
	QString chartoqs(char *p);
	void InitThisPage();

protected:
	bool eventFilter(QObject *obj, QEvent *event);

private:
	Ui::admin_index ui;
};

#endif // ADMIN_INDEX_H
