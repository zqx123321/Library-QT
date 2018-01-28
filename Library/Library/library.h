#ifndef LIBRARY_H
#define LIBRARY_H
#include<string>
#include<iostream>
#include <QtWidgets/QMainWindow>
#include "ui_library.h"
#include"student_index.h"
#include<QLibrary>


class Library : public QMainWindow
{
	Q_OBJECT

public:
	Library(QWidget *parent = Q_NULLPTR);
	~Library();
	QString strtoqs(const string &s);
	string qstostr(const QString &s);	

public slots:
	void ClickButton();
	void ClickButtonToAdmin();

protected:
	bool eventFilter(QObject *obj, QEvent *event);

private:
	Ui::LibraryClass ui;
};

#endif // LIBRARY_H
