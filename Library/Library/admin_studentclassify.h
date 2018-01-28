#pragma once

#include <QWidget>
#include "ui_admin_studentclassify.h"
#include "dept.h"

class admin_studentclassify : public QWidget
{
	Q_OBJECT

public:
	admin_studentclassify(QWidget *parent = Q_NULLPTR);
	~admin_studentclassify();
protected:
	bool eventFilter(QObject *obj, QEvent *event);

public slots:
	void OnClicked(QString);
signals:
	void UpdateDeptSignal(QString);
private:
	Ui::admin_studentclassify ui;
	vector<Dept>DataTable;
	void DataBind();
};
