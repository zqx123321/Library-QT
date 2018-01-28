#pragma once

#include <QWidget>
#include "ui_student_classify.h"
#include"classify.h"

class student_classify : public QWidget
{
	Q_OBJECT

public:
	student_classify(QWidget *parent = Q_NULLPTR);
	~student_classify();


protected:
	bool eventFilter(QObject *obj, QEvent *event);

public slots:
	void OnClicked(int id);

private:
	Ui::student_classify ui;
	vector<Classify>DataTable;
	void DataBind();
	
};
