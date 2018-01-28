#pragma once

#include <QWidget>
#include "ui_selectData.h" 

class selectData : public QWidget
{
	Q_OBJECT

public:
	selectData(QWidget *parent = Q_NULLPTR);
	~selectData();
protected:
	bool eventFilter(QObject *obj, QEvent *event);
private:
	Ui::selectData ui;
};
