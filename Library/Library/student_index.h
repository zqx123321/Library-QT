#ifndef STUDENT_INDEX_H
#define STUDENT_INDEX_H

#include<string>
#include<iostream>
#include <QWidget>
#include "ui_student_index.h"
#include"record.h"
#include"Thread.h"
#include<vector>
using namespace std;
  
class student_index : public QWidget
{
	Q_OBJECT

public:
	student_index(QWidget *parent = Q_NULLPTR);
	~student_index();
	void addItemContent(int row, int column, QString content);
	QString strtoqs(const string &s);
	string qstostr(const QString &s);
	void InitThisPage();
	void InitRecommendPic();
	QString chartoqs(char *p);
	void addItemContentOrder(int row, int column, QString content);

public slots:
	void ClickButton();
	void OnBtnClicked(int id);
	void OnBtnRecommendClicked(int id);
	void OnBtnClickedCancel(int id);
	void UpdateSlot();

protected:
	bool eventFilter(QObject *obj, QEvent *event);

private:
	Ui::student_index ui;
	vector<Record>resRecord;
	Thread *myThread;
	float money;
};

#endif // STUDENT_INDEX_H
