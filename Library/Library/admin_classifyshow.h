#pragma once

#include <QWidget>
#include "ui_admin_classifyshow.h"
#include<vector>
#include"classify.h"
class admin_classifyshow : public QWidget
{
	Q_OBJECT

public:
	admin_classifyshow(QWidget *parent = Q_NULLPTR);
	~admin_classifyshow();
protected:
	bool eventFilter(QObject *obj, QEvent *event);

public slots:
	void OnClicked(int id);
signals:
	void UpdateClassSignal(QString);

private:
	Ui::admin_classifyshow ui;
	vector<Classify>DataTable;
	void DataBind();
};
