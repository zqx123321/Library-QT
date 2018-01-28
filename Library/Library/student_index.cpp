#include "student_index.h"
#include<string>
#include<iostream>
#include<QDateTime>
#include<QMessageBox>
#include <QTextCodec> 
#include "qlabel.h"
#include"filedb.h"
#include"library.h"
#include"book.h"
#include<vector>
#include"userConfig.h"
#include"student.h"
#include"record.h"
#include"userConfig.h"
#include"student_borrow.h"
#include"student_searchbook.h"
#include"student_bookdetail.h"
#include"bookConfig.h"
#include"student_update.h"
#include"bookMap.h"
#include"student_borrowdetail.h"
#include"record.h"
#include"classifyMap.h"
#include"classify.h"
#include"recommendBuffer.h"
#include<map>
#include<QSignalMapper>
#include <QUrl>
#include <QCloseEvent>
#include <qtnetwork/qnetworkaccessmanager>
#include <qtnetwork/QNetworkRequest>
#include <qtnetwork/QNetworkRequest>
#include <qtnetwork/QNetworkReply>
#include"recommendBuffer.h"
using namespace std;	

student_index::student_index(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	showFullScreen();
	ui.tableOrder->setColumnCount(5);
	ui.lineEdit->setEnabled(false);
	ui.lineEdit_2->setEnabled(false);
	ui.etSnumber->setText(userConfig::username);
	ui.etSname->setEnabled(false);
	ui.etDebt->setEnabled(false);
	ui.etSdept->setEnabled(false);
	ui.etSnumber->setEnabled(false);
	ui.etBorrownumber->setEnabled(false);
	ui.btnPersonal->installEventFilter(this);
	ui.btnInformationchange->installEventFilter(this);
	ui.btnSearchbook->installEventFilter(this);
	ui.btnBorrowmore->installEventFilter(this);
	ui.btnLogout->installEventFilter(this);
	ui.tableBorrow->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置不可编辑	
	ui.tableBorrow->verticalHeader()->setVisible(false); //设置行号不可见
	ui.tableBorrow->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表宽度自适应
	ui.tableBorrow->setFrameShape(QFrame::NoFrame);//设置无边框
	ui.tableBorrow->setShowGrid(false); //设置不显示格子线

	ui.tableOrder->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置不可编辑	
	ui.tableOrder->verticalHeader()->setVisible(false); //设置行号不可见
	ui.tableOrder->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表宽度自适应
	ui.tableOrder->setFrameShape(QFrame::NoFrame);//设置无边框
	ui.tableOrder->setShowGrid(false); //设置不显示格子线
	ui.tableOrder->horizontalHeader()->setVisible(false);// 水平不可见 
	ui.tableOrder->insertRow(0);
	ui.tableOrder->setRowHeight(0, 150);
	InitThisPage();
	

	if (!recommendBuffer::isPostBack) {
		myThread = new Thread;
		connect(myThread, SIGNAL(UpdateSignal()),
			this, SLOT(UpdateSlot()));
		myThread->start();
	}
	else {
		InitRecommendPic();
	}
}

student_index::~student_index()
{

}

bool student_index::eventFilter(QObject *obj, QEvent *event) {
	QTextCodec * BianMa = QTextCodec::codecForName("GBK");
	if (obj ==ui.btnBorrowmore && event->type() == QEvent::MouseButtonPress) {
		student_borrow *rec = new student_borrow;
		rec->show();
		this->close();
	}
	if (obj == ui.btnSearchbook && event->type() == QEvent::MouseButtonPress) {
		student_searchBook *rec = new student_searchBook;
		this->close();
		rec->show();
	}
	if (obj == ui.btnLogout && event->type() == QEvent::MouseButtonPress) {
		QMessageBox::StandardButton button;
		button = QMessageBox::question(this, chartoqs("退出程序"),
			QString(chartoqs("确认退出程序?")),
			QMessageBox::Yes | QMessageBox::No);
		if (button == QMessageBox::No) {
			event->ignore();  //忽略退出信号，程序继续运行
		}
		else if (button == QMessageBox::Yes) {
			recommendBuffer::Resert();
			Library *rec = new Library;
			this->close();
			rec->show();
			event->accept();  //接受退出信号，程序退出
		}
		
	}
	if (obj == ui.btnInformationchange && event->type() == QEvent::MouseButtonPress) {
		student_update *rec = new student_update;
		this->close();
		rec->show();
	}
	return false;
}

QString student_index::strtoqs(const string &s)

{

	return QString(QString::fromLocal8Bit(s.c_str()));

}

string student_index::qstostr(const QString &s)

{

	return string((const char*)s.toLocal8Bit());

}

void student_index::addItemContent(int row, int column, QString content)
{
	QTableWidgetItem *item = new QTableWidgetItem(content);
	ui.tableBorrow->setItem(row, column, item);
}

void student_index::addItemContentOrder(int row, int column, QString content)
{
	QTableWidgetItem *item = new QTableWidgetItem(content);
	ui.tableOrder->setItem(row, column, item);
}

void student_index::InitThisPage() {
	QTextCodec * BianMa = QTextCodec::codecForName("GBK");

	//查询这个学生的基本信息，并更新页面
	Student student;
	vector<string>VALUES;
	vector<Student>resStudent;
	VALUES.push_back("one");
	VALUES.push_back("id");
	student.setId(userConfig::id);
	FileDB::select("student", student, VALUES, resStudent);
	ui.etSname->setText(BianMa->toUnicode(resStudent[0].username));
	ui.etSdept->setText(BianMa->toUnicode(resStudent[0].dept));
	//加载头像
	//从本地加载
	if (strstr(resStudent[0].icon, "images")) {
		recommendBuffer::headUrlLocal = resStudent[0].icon;
	}
	else {
		QUrl url(resStudent[0].icon);
		recommendBuffer::headUrl = url;
	}
	/*
	 *以下更新借阅表
	*/
	//查询这个学生的借书记录
	Record record;
	vector<Record>resRecord;
	vector<Record>resRecordNormal;
	vector<Record>resRecordExceed;
	vector<Record>resRecordOrder;
	VALUES.pop_back();
	VALUES.push_back("studentId");
	record.setStudentId(resStudent[0].id);
	FileDB::select("record", record, VALUES, resRecord);

	QDateTime now = QDateTime::currentDateTime();
	for (int i = 0; i < resRecord.size(); i++) {
		//正常
		if (resRecord[i].type == 0||resRecord[i].type == 3) resRecordNormal.push_back(resRecord[i]);
		//超期
		if (resRecord[i].type == 1) resRecordExceed.push_back(resRecord[i]);
		//预约
		if (resRecord[i].type == 2) {
			//删除超期的预约记录
			QDateTime then = QDateTime::fromString(resRecord[i].time, "yyyy-MM-dd");
			int span = then.secsTo(now);
			if (span > 0) {
				Record rec;
				VALUES.pop_back();
				VALUES.push_back("id");
				rec.setId(resRecord[i].id);
				FileDB::Delete("record", rec, VALUES);
			}
			//没有超期，加载进来
			else {
				resRecordOrder.push_back(resRecord[i]);
			}
		}
	}
	//更新信息
	resRecord.clear();
	for (int i = 0; i < resRecordNormal.size(); i++) {
		resRecord.push_back(resRecordNormal[i]);
	}
	for (int i = 0; i < resRecordExceed.size(); i++) {
		resRecord.push_back(resRecordExceed[i]);
	}
	for (int i = 0; i < resRecordOrder.size(); i++) {
		resRecord.push_back(resRecordOrder[i]);
	}
	

	//每借阅的每一本书加载到表格里
	string borrowNumber = "(";
	char c[20];
	itoa(resRecordNormal.size()+ resRecordExceed.size()+ resRecordOrder.size(), c, 10);
	borrowNumber += c;
	borrowNumber += ")";
	ui.etBorrownumber->setText(strtoqs(borrowNumber));
	QStringList header;
	header << strtoqs("书名") << strtoqs("作者") << strtoqs("出版社") << strtoqs("状态") << strtoqs("查看详情");
	ui.tableBorrow->setHorizontalHeaderLabels(header);
	ui.tableBorrow->horizontalHeader()->setStretchLastSection(true);
	ui.tableBorrow->setEditTriggers(QAbstractItemView::NoEditTriggers);
	int sum_row = ui.tableBorrow->rowCount();
	ui.tableBorrow->removeRow(sum_row);


	Book book;
	BookMap bookmap;
	vector<Book>resBook;
	vector<BookMap>resBookMap;
	//逐行加载到借阅表里

	//第一次加载时做的动作
	float money = 0;
	vector<string>VALBOOK;
	VALBOOK.push_back("one");
	VALBOOK.push_back("id");
	//加载借阅但未超期的数目（注意此时可能有一部分变为超期）
	for (int i = 0; i < resRecord.size(); i++) {
		//检查是否超期
		if (resRecord[i].type == 0 || resRecord[i].type == 3) {
			QDateTime then = QDateTime::fromString(resRecord[i].time, "yyyy-MM-dd");
			int span = then.secsTo(now);
			if (span > 0) {
				Record rec;
				rec.setId(resRecord[i].id);
				int day = span / (60 * 60 * 24);
				money += day;
				resRecord[i].type = 1;
				FileDB::update("record", rec, resRecord[i], VALBOOK);
			}
		}
		VALUES.clear();
		VALUES.push_back("one");
		VALUES.push_back("id");
		resBookMap.clear();
		resBook.clear();
		//非预约本
		if (resRecord[i].type != 2) {
			//查询bookMap，得bookId
			bookmap.setId(resRecord[i].bookId);
			FileDB::select("bookMap", bookmap, VALUES, resBookMap);
			//查询book，得书名
			book.setId(resBookMap[0].bookId);
			FileDB::select("book", book, VALUES, resBook);
		}
		//预约本
		else {
			//查询book，得书名
			book.setId(resRecord[i].bookId);
			FileDB::select("book", book, VALUES, resBook);
		}
		int row = ui.tableBorrow->rowCount();
		ui.tableBorrow->insertRow(i);
		
		addItemContent(i, 0, chartoqs(resBook[0].name));
		addItemContent(i, 1, chartoqs(resBook[0].author));
		addItemContent(i, 2, chartoqs(resBook[0].publish));
		if(resRecord[i].type==0 || resRecord[i].type == 3)
			addItemContent(i, 3, chartoqs("正常"));
		else if(resRecord[i].type == 1)
			addItemContent(i, 3, chartoqs("超期"));
		else
			addItemContent(i, 3, chartoqs("预约"));
		//添加“详情”按钮，并绑定事件
		QPushButton *btn = new QPushButton;
		ui.tableBorrow->setCellWidget(i, 4, btn);
		btn->setStyleSheet(
			"color:#4695d2;"
			"border:none;"
			"background:white;"
			"text-size:20px;"
		);

		if (resRecord[i].type != 2) {
			btn->setText(strtoqs("详情"));
			QSignalMapper* signalMapper = new QSignalMapper(this);
			connect(btn, SIGNAL(clicked()), signalMapper, SLOT(map()));
			signalMapper->setMapping(btn, resRecord[i].bookId);
			connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(OnBtnClicked(int)));
		}
		else {
			btn->setText(strtoqs("取消预约"));
			QSignalMapper* signalMapper = new QSignalMapper(this);
			connect(btn, SIGNAL(clicked()), signalMapper, SLOT(map()));
			signalMapper->setMapping(btn, resRecord[i].id);
			connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(OnBtnClickedCancel(int)));
		}
	}
	
	if (!recommendBuffer::isPostBack) {
		//保存欠费金额
		if (money > resStudent[0].money) {
			resStudent[0].setMoney(money);
			student.setId(resStudent[0].id);
			FileDB::update("student", student, resStudent[0], VALUES);
		}
	}
	QString total = QString("%1").arg(resStudent[0].money);
	ui.etDebt->setText(chartoqs("欠款金额：") + total + chartoqs("元"));



	vector<string>VALUES_2;
	//加载推荐书目
	int maxClassifyId = 0;
	if (!recommendBuffer::isPostBack) {
		map<int, int>classifyMap;
		Classify classify;
		ClassifyMap classifymap;
		vector<ClassifyMap>resClMap;
		resBook.clear();
		resBookMap.clear();
		VALUES.clear();
		VALUES.push_back("one");
		VALUES.push_back("id");
		VALUES_2.push_back("one");
		VALUES_2.push_back("bookId");
		for (int i = 0; i < resRecord.size(); i++) {
			resBook.clear();
			resBookMap.clear();
			bookmap.setId(resRecord[i].bookId);
			FileDB::select("bookMap", bookmap, VALUES, resBookMap);
			classifymap.setBookId(resBookMap[0].bookId);
			FileDB::select("classifyMap", classifymap, VALUES_2, resClMap);
			int id = resClMap[0].classifyId;
			classifyMap[id]++;
			if (classifyMap[id] > classifyMap[maxClassifyId]) maxClassifyId = id;
		}

		//如果借阅记录为0，则随机推荐
		if (resRecord.size() == 0) {
			srand((unsigned)time(NULL));
			vector<string>VALUES_3;
			VALUES_3.push_back("all");
			Classify classify;
			vector<Classify>resClssify;
			FileDB::select("classify", classify, VALUES_3, resClssify);
			int a = 0;
			int b = resClssify.size() - 1;
			int No = (rand() % (b - a + 1)) + a;
			maxClassifyId = resClssify[No].id;
		}

		VALUES.pop_back();
		VALUES.push_back("classifyId");
		book.setClassifyId(maxClassifyId);
		resBook.clear();
		FileDB::select("book", book, VALUES, resBook);

		for (int i = 0; i < 6 && i < resBook.size(); i++) {
			if (!strstr(resBook[i].cover, "images")) {
				recommendBuffer::urlBuffer.push_back(QString::fromUtf8(resBook[i].cover));
			}
			else {
				recommendBuffer::urlBufferLocal.push_back(QString::fromLocal8Bit(resBook[i].cover));
			}
			
			recommendBuffer::idBuffer.push_back(resBook[i].id);
		}
	}

}
void student_index::UpdateSlot() {
	InitRecommendPic();
}

void student_index::InitRecommendPic() {
	ui.lbHead->setPixmap(recommendBuffer::headBuffer[0]);
	for (int i = 0; i < recommendBuffer::picBuffer.size(); i++) {
		QPixmap pixmap = recommendBuffer::picBuffer[i];
		QPushButton *pBtn = new QPushButton;
		pBtn->setStyleSheet(
			"color:#4695d2;"
			"border:none;"
			"background:white;"
			"text-size:20px;"
		);
		pBtn->setIcon(pixmap);
		pBtn->setIconSize(QSize(pixmap.width(), pixmap.height()));
		ui.tableOrder->setCellWidget(0, i, pBtn);
		QSignalMapper* signalMapper = new QSignalMapper(this);
		connect(pBtn, SIGNAL(clicked()), signalMapper, SLOT(map()));
		signalMapper->setMapping(pBtn, recommendBuffer::idBuffer[i]);
		connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(OnBtnRecommendClicked(int)));
	}
	if (!recommendBuffer::isPostBack) {
		recommendBuffer::isPostBack = true;
	}
}


void student_index::ClickButton() {
}

void student_index::OnBtnClickedCancel(int id){
	QTextCodec * BianMa = QTextCodec::codecForName("GBK");
	Record record;
	vector<string>VALUES;
	VALUES.push_back("one");
	VALUES.push_back("id");
	record.setId(id);
	int res = FileDB::Delete("record", record, VALUES);
	if (res > 0) {
		QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("取消成功"), QMessageBox::Ok);
		student_index *rec = new student_index;
		this->close();
		rec->show();
	}
	
}
void student_index::OnBtnRecommendClicked(int id){
	bookConfig::bookId = id;
	student_bookDetail *rec = new student_bookDetail;
	rec->showFullScreen();
	this->close();
}
void student_index::OnBtnClicked(int id)
{
	bookConfig::bookNo = id;
	student_borrowdetail *rec = new student_borrowdetail;
	rec->showFullScreen();
	this->close();
}

QString student_index::chartoqs(char *p) {
	string s = p;
	return QString(QString::fromLocal8Bit(s.c_str()));
}