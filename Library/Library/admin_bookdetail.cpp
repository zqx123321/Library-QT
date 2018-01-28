#include "admin_bookdetail.h"
#include"filedb.h"
#include<QSignalMapper>
#include"bookConfig.h"
#include"bookMap.h"
#include"record.h"
#include"student.h"
#include"library.h"
#include"book.h"
#include<QPushButton>
#include<QMessageBox>
admin_bookdetail::admin_bookdetail(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	show();
	ui.tableWidget->setColumnCount(5);
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置不可编辑	
	ui.tableWidget->verticalHeader()->setVisible(false); //设置行号不可见
	ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表宽度自适应
	ui.tableWidget->setShowGrid(false);
	//// 设置表头不可见，需要添加QHeadView头文件 
	//ui.tableWidget->horizontalHeader()->setVisible(false);// 水平不可见 
	//ui.tableWidget->verticalHeader()->setVisible(false);// 垂直不可见
	DataBind();
}

admin_bookdetail::~admin_bookdetail()
{
}
void admin_bookdetail::DataBind() {
	BookMap bookmap;
	vector<string>VALUES;
	vector<string>VALUESGG;
	vector<BookMap>resBookmap;
	VALUES.push_back("one");
	VALUES.push_back("bookId");
	VALUESGG.push_back("one");
	VALUESGG.push_back("bookId");
	bookmap.setBookId(bookConfig::bookId);
	FileDB::select("bookMap", bookmap, VALUES, DataTable);
	
	Record record;
	vector<Record>resRecord;
	for (int i = 0; i < DataTable.size(); i++) {
		ui.tableWidget->insertRow(i);
		ui.tableWidget->setItem(i, 0, new QTableWidgetItem(QString::fromLocal8Bit("副本") + QString::number(i + 1, 10)));
		//未被借出
		if (!DataTable[i].isOut) {
			ui.tableWidget->setItem(i, 1, new QTableWidgetItem(QString::fromLocal8Bit("未借出")));
			QPushButton *btn = new QPushButton;
			ui.tableWidget->setCellWidget(i, 4, btn);

			QSignalMapper* signalMapper = new QSignalMapper(this);
			connect(btn, SIGNAL(clicked()), signalMapper, SLOT(map()));
			signalMapper->setMapping(btn, DataTable[i].id);
			connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(OnBtnClicked(int)));
			btn->setStyleSheet(
				"color:#4695d2;"
				"border:none;"
				"background:white;"
				"text-size:20px;"
			);
			btn->setText(QString::fromLocal8Bit("删除"));
		}
		//借出
		else {
			record.setBookId(DataTable[i].id);
			resRecord.clear();
			FileDB::select("record", record, VALUESGG, resRecord);
			if (resRecord.size() > 0) {
				int j;
				for (j = 0; i < resRecord.size(); j++) {
					if (resRecord[j].type != 4)break;
				}
				//if (resRecord[0].type == 0)
				ui.tableWidget->setItem(i, 1, new QTableWidgetItem(QString::fromLocal8Bit("已借出")));
				//else if (resRecord[0].type == 1)
					//ui.tableWidget->setItem(i, 1, new QTableWidgetItem(QString::fromLocal8Bit("超期未还")));
				//else
					//ui.tableWidget->setItem(i, 1, new QTableWidgetItem(QString::fromLocal8Bit("被预约")));

				Student student;
				vector<Student>resStudent;
				student.setId(resRecord[j].studentId);
				VALUES.pop_back();
				VALUES.push_back("id");
				FileDB::select("student", student, VALUES, resStudent);
				ui.tableWidget->setItem(i, 2, new QTableWidgetItem(QString::fromLocal8Bit(resStudent[0].usercode)));
				ui.tableWidget->setItem(i, 3, new QTableWidgetItem(QString::fromLocal8Bit(resRecord[j].time)));
			}
		}
	}
}

void admin_bookdetail::OnBtnClicked(int id)
{
	QMessageBox::StandardButton button;
	button = QMessageBox::question(this, QString::fromLocal8Bit("退出程序"),
		QString(QString::fromLocal8Bit("确定删除这本书吗?")),
		QMessageBox::Yes | QMessageBox::No);
	if (button == QMessageBox::No) {
		
	}
	else if (button == QMessageBox::Yes) {
		//删除bookMap
		BookMap bookmap;
		bookmap.setId(id);
		vector<string>VALUES;
		vector<BookMap>resBookmap;
		VALUES.push_back("one");
		VALUES.push_back("id");
		FileDB::select("bookMap", bookmap, VALUES, resBookmap);
		FileDB::Delete("bookMap", bookmap, VALUES);
		//更新book数量
		Book book;
		book.setId(resBookmap[0].bookId);
		vector<Book>resBook;
		FileDB::select("book", book, VALUES, resBook);

		resBook[0].setCount(resBook[0].count - 1);
		resBook[0].setNowCount(resBook[0].nowCount - 1);
		//如果数量是0，则删除这本书
		if (resBook[0].count == 0) {
			FileDB::Delete("book", book, VALUES);
		}
		else {
			FileDB::update("book", book, resBook[0], VALUES);
		}
		//发信号，表示删除成功，回调更新之前的界面
		emit DeleteSuccess(resBookmap[0].bookId);
		this->close();
	}
}

