#ifndef TEST_H
#define TEST_H

#include <QWidget>
#include "ui_test.h"
#include"filedb.h"
#include"student.h"
#include"book.h"
#include"admin.h"
#include"record.h"
#include"classify.h"
#include"bookMap.h"

class test : public QWidget
{
	Q_OBJECT

public:
	test(QWidget *parent = 0);
	~test();
	void addItemContent(int row, int column, QString content);
	QString strtoqs(const string &s);
	string qstostr(const QString &s);
	void load_book();
	void load_student();
	void load_record();
	void load_bookMap();
	void OnBtnClicked();
	void ClickButton();
	void on_cellClicked(int row, int column);

public slots :
	void changed(int position);
private:
	Ui::test ui;
};

#endif // TEST_H
