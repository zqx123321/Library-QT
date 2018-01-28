#pragma once

#include <QWidget>
#include "ui_admin_bookdetail.h"
#include<vector>
#include "bookMap.h"

class admin_bookdetail : public QWidget
{
	Q_OBJECT

public:
	admin_bookdetail(QWidget *parent = Q_NULLPTR);
	~admin_bookdetail();

public slots:
	void OnBtnClicked(int id);

signals:
	void DeleteSuccess(int);
private:
	Ui::admin_bookdetail ui;
	vector<BookMap>DataTable;
	void DataBind();
};
