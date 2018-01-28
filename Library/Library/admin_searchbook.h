#ifndef ADMIN_SEARCHBOOK_H
#define ADMIN_SEARCHBOOK_H

#include <QWidget>
#include "ui_admin_searchbook.h"
#include<vector>
#include"book.h"

class admin_searchbook : public QWidget
{
	Q_OBJECT

public:
	admin_searchbook(QWidget *parent = 0);
	~admin_searchbook();

protected:
	bool eventFilter(QObject *obj, QEvent *event);

public slots:
	void OnBtnClicked(int id);
	void OnBtnClickedDelete(int id);
	void radioBtnSlot();
	void radioBtnSlotOther();
	void OnBtnClickedChange(int id);
	void OnBtnClickedAddCount(int id);
	void UpdateUI(int);
signals:
	void emitChange(int);

private:
	Ui::admin_searchbook ui;
	vector<Book>DataTable;
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

#endif // ADMIN_SEARCHBOOK_H
