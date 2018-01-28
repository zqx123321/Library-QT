#ifndef ADMIN_CLASSIFY_H
#define ADMIN_CLASSIFY_H

#include <QWidget>
#include "ui_admin_classify.h" 
#include<vector>
#include"classify.h"

class admin_classify : public QWidget
{
	Q_OBJECT

public:
	admin_classify(QWidget *parent = 0);
	~admin_classify();

protected:
	bool eventFilter(QObject *obj, QEvent *event);

public slots:
	void OnBtnClickedDelete(int id);
	void OnBtnClicked(QString id);

signals:
	void emitChangeClassify(QString);
private:
	Ui::admin_classify ui;
	vector<Classify>DataTable;
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

#endif // ADMIN_CLASSIFY_H
