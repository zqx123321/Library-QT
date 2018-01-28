#ifndef STUDENT_BORROW_H
#define STUDENT_BORROW_H

#include <QWidget>
#include "ui_student_borrow.h"
#include<string>
#include<iostream>
#include"record.h"
using namespace std;

class student_borrow : public QWidget
{
	Q_OBJECT

public:
	student_borrow(QWidget *parent = Q_NULLPTR);
	~student_borrow();
	void InitThisPage();
	void addItemContent(int row, int column, QString content);
	QString strtoqs(const string &s);
	string qstostr(const QString &s);
	QString chartoqs(char *p);

public slots:
	void ClickButton();
	void OnBtnClicked(int id);

protected:
	bool eventFilter(QObject *obj, QEvent *event);

private:
	Ui::student_borrow ui;
	vector<Record>resRecord;
	int PageIndex = 0;
	int PageCount = 0;
	int PageLength = 3;
	void DataBind();
	void NextPage();
	void LastPage();
	void FirstPage();
	void TheLastPage();
};

#endif // STUDENT_BORROW_H
