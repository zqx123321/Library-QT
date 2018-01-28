#pragma once

#include <QWidget>
#include "ui_admin_addclassify.h" 

class admin_addclassify : public QWidget
{
	Q_OBJECT

public:
	admin_addclassify(QWidget *parent = Q_NULLPTR);
	~admin_addclassify();
protected:
	bool eventFilter(QObject *obj, QEvent *event);

public slots:
	void InitClassify(QString);

private:
	Ui::admin_addclassify ui;
	bool isChange;
	QString claName;
};
