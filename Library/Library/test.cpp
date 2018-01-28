#include "test.h"
#include <QTextCodec>
#include<vector>
#include<string>
#include<iostream>
#include <QTextCodec>
#include"bookConfig.h"
#include"student_bookdetail.h"
#include"filedb.h"
#include"qdebug.h"
#include<QMessageBox>
#include<QSignalMapper>
using namespace std;

test::test(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	QTextCodec * BianMa = QTextCodec::codecForName("GBK");
	QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("1"), QMessageBox::Ok);
	load_record();
}

void test::on_cellClicked(int row, int column) {
	QTextCodec * BianMa = QTextCodec::codecForName("GBK");
	QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("2"), QMessageBox::Ok);
	//ui.tableBorrow->item(row, 1)->text();
	char* ch1;
	QByteArray ba = ui.tableBorrow->item(row, 1)->text().toLatin1();//书名
	ch1 = ba.data();
	char* ch2;
	ba = ui.tableBorrow->item(row, 3)->text().toLatin1();//出版社
	ch2 = ba.data();
	Book book; 
	vector<string>VALUES; 
	vector<Book>res; 
	VALUES.push_back("one"); 
	VALUES.push_back("name");
	VALUES.push_back("publish");
	book.setName(ch1);
	book.setPublish(ch2);
	FileDB::select("book", book, VALUES, res);
	if (res.size() > 0) {
		bookConfig::bookId = res[0].id;
		student_bookDetail *rec = new student_bookDetail;
		rec->show();
		this->close();
	}
	else {
		QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("未知错误"), QMessageBox::Ok);
	}
}

void test::load_book() {
	Book book;
	vector<string>VALUES;
	vector<Book>res;
	VALUES.push_back("all");
	FileDB::select("book", book, VALUES, res);

	QStringList header;
	header << strtoqs("书名") << strtoqs("作者") << strtoqs("出版社");
	ui.tableBorrow->setHorizontalHeaderLabels(header);
	ui.tableBorrow->horizontalHeader()->setStretchLastSection(true);
	ui.tableBorrow->setEditTriggers(QAbstractItemView::NoEditTriggers);
	int sum_row = ui.tableBorrow->rowCount();
	ui.tableBorrow->removeRow(sum_row);
	for (int i = 0; i < res.size(); i++) {
		int row = ui.tableBorrow->rowCount();
		ui.tableBorrow->insertRow(i);
		addItemContent(i, 0, strtoqs(res[i].cover));
		addItemContent(i, 1, strtoqs(res[i].author));
		QPushButton *pBtn = new QPushButton();
		ui.tableBorrow->setCellWidget(i, 2, pBtn);
		QSignalMapper* signalMapper = new QSignalMapper(this);
		connect(pBtn, SIGNAL(clicked()), signalMapper, SLOT(map()));
		signalMapper->setMapping(pBtn, res[i].id);
		connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(changed(int)));
	}
}

void test::OnBtnClicked()
{
	QPushButton * senderObj = qobject_cast<QPushButton *>(sender());
	if (senderObj == 0)
	{
		return;
	}
	QModelIndex index = ui.tableBorrow->indexAt(QPoint(senderObj->frameGeometry().x(), senderObj->frameGeometry().y()));
	int row = index.row();
	student_bookDetail *rec = new student_bookDetail;
	this->close();
	rec->show();
}

void test::ClickButton() {
	student_bookDetail *rec = new student_bookDetail;
	rec->show();
	this->close();
}

test::~test()
{

}

QString test::strtoqs(const string &s)

{

	return QString(QString::fromLocal8Bit(s.c_str()));

}

string test::qstostr(const QString &s)

{

	return string((const char*)s.toLocal8Bit());

}

void test::addItemContent(int row, int column, QString content)
{
	QTableWidgetItem *item = new QTableWidgetItem(content);
	ui.tableBorrow->setItem(row, column, item);
}

void test::load_student() {
	Student student;
	vector<string>VALUES;
	vector<Student>res;
	VALUES.push_back("all");
	FileDB::select("student", student, VALUES, res);

	QStringList header;
	header << strtoqs("学号") << strtoqs("姓名") << strtoqs("密码");
	ui.tableBorrow->setHorizontalHeaderLabels(header);
	ui.tableBorrow->horizontalHeader()->setStretchLastSection(true);
	ui.tableBorrow->setEditTriggers(QAbstractItemView::NoEditTriggers);
	int sum_row = ui.tableBorrow->rowCount();
	ui.tableBorrow->removeRow(sum_row);
	for (int i = 0; i < res.size(); i++) {
		int row = ui.tableBorrow->rowCount();
		ui.tableBorrow->insertRow(i);
		addItemContent(i, 0, strtoqs(res[i].usercode));
		addItemContent(i, 1, strtoqs(res[i].username));
		addItemContent(i, 2, strtoqs(res[i].password));
	}
}

void test::load_record() {
	Record record;
	vector<string>VALUES;
	vector<Record>res;
	VALUES.push_back("all");
	FileDB::select("record", record, VALUES, res);

	QStringList header;
	header << strtoqs("id") << strtoqs("学生id") << strtoqs("图书id");
	ui.tableBorrow->setHorizontalHeaderLabels(header);
	ui.tableBorrow->horizontalHeader()->setStretchLastSection(true);
	ui.tableBorrow->setEditTriggers(QAbstractItemView::NoEditTriggers);
	int sum_row = ui.tableBorrow->rowCount();
	ui.tableBorrow->removeRow(sum_row);
	for (int i = 0; i < res.size(); i++) {
		int row = ui.tableBorrow->rowCount();
		ui.tableBorrow->insertRow(i);
		addItemContent(i, 0, QString::number(res[i].id));
		addItemContent(i, 1, QString::number(res[i].studentId));
		addItemContent(i, 2, QString::number(res[i].bookId));
	}
}

void test::load_bookMap() {
	BookMap bookMap;
	vector<string>VALUES;
	vector<BookMap>res;
	VALUES.push_back("all");
	FileDB::select("bookMap", bookMap, VALUES, res);

	QStringList header;
	header << strtoqs("bookId") << strtoqs("bookNum")<<strtoqs("dirty")<<strtoqs("isOut");
	ui.tableBorrow->setHorizontalHeaderLabels(header);
	ui.tableBorrow->horizontalHeader()->setStretchLastSection(true);
	ui.tableBorrow->setEditTriggers(QAbstractItemView::NoEditTriggers);
	int sum_row = ui.tableBorrow->rowCount();
	ui.tableBorrow->removeRow(sum_row);
	for (int i = 0; i < res.size(); i++) {
		int row = ui.tableBorrow->rowCount();
		ui.tableBorrow->insertRow(i);
		addItemContent(i, 0, QString::number(res[i].bookId));
		addItemContent(i, 1, QString::number(res[i].bookNum));
		addItemContent(i, 2, QString::number(res[i].dirty));
		addItemContent(i, 3, QString::number(res[i].isOut));
	}
}

void test::changed(int position) {

	QMessageBox::information(NULL, "Title", QString::number(position, 10), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
}

