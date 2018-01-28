#ifndef STUDENT_SEARCHBOOK_H
#define STUDENT_SEARCHBOOK_H

#include <QWidget>
#include<string>
#include<vector>
#include"book.h"
#include "ui_student_searchbook.h"

class student_searchBook : public QWidget
{
	Q_OBJECT

public:
	student_searchBook(QWidget *parent = 0);
	~student_searchBook();
	void addItemContent(int row, int column, QString content);
	QString strtoqs(const string &s);
	string qstostr(const QString &s);

protected:
	bool eventFilter(QObject *obj, QEvent *event);

signals:
	void sendData(QString);   //用来传递数据的信号  

public slots:
	void OnBtnClicked(int id);
	void radioBtnSlot();
	void radioBtnSlotOther();

private:
	Ui::student_searchBook ui;
	vector<Book>DataTable;
	int PageIndex = 0;
	int PageCount = 0;
	int PageLength = 3;
	void SearchData();
	void DataBind();
	void NextPage();
	void LastPage();
	void FirstPage();
	void TheLastPage();
};

#endif // STUDENT_SEARCHBOOK_H
