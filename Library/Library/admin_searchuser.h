#ifndef ADMIN_SEARCHUSER_H
#define ADMIN_SEARCHUSER_H

#include <QWidget>
#include "ui_admin_searchuser.h"
#include<vector>
#include"student.h"
class admin_searchuser : public QWidget
{
	Q_OBJECT

public:
	admin_searchuser(QWidget *parent = 0);
	~admin_searchuser();
protected:
	bool eventFilter(QObject *obj, QEvent *event);

public slots:
	void OnBtnClickedDelete(int id);
	void OnBtnClickedReset(int id);
	void OnBtnClickedClear(int id);
	void OnBtnClickedChange(int id);
	void radioBtnSlot();
	void radioBtnSlotOther();
	

signals:
	void emitChange(int);
private:
	Ui::admin_searchuser ui;
	vector<Student>DataTable;
	int PageIndex = 0;
	int PageCount = 0;
	int PageLength = 10;
	void SearchData();
	void DataBind();
	void NextPage();
	void LastPage();
	void FirstPage();
	void TheLastPage();
};

#endif // ADMIN_SEARCHUSER_H
