#include "student_classify.h"
#include<QSignalMapper>
#include"classify.h"
#include<QMessageBox>
#include"filedb.h"
#include"library.h"
#include"student_searchbook.h"
#include"classifyConfig.h"
#include"student_index.h"
#include"recommendBuffer.h"
#include"student_update.h"
student_classify::student_classify(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	showFullScreen();
	ui.tableWidget->setColumnCount(5);
	classifyConfig::isCheck = 0;
	ui.btnInformationchange->installEventFilter(this);
	ui.btnPersonal->installEventFilter(this);
	ui.btnLogout->installEventFilter(this);
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置不可编辑	
	ui.tableWidget->verticalHeader()->setVisible(false); //设置行号不可见
	ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表宽度自适应
	ui.tableWidget->setShowGrid(false);
	// 设置表头不可见，需要添加QHeadView头文件 
	ui.tableWidget->horizontalHeader()->setVisible(false);// 水平不可见 
	ui.tableWidget->verticalHeader()->setVisible(false);// 垂直不可见
	DataBind();
}

student_classify::~student_classify()
{
}

bool student_classify::eventFilter(QObject *obj, QEvent *event)
{
	if (obj == ui.btnLogout && event->type() == QEvent::MouseButtonPress) {
		QMessageBox::StandardButton button;
		button = QMessageBox::question(this, QString::fromLocal8Bit("退出程序"),
			QString(QString::fromLocal8Bit("确认退出程序?")),
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
	if (obj == ui.btnPersonal && event->type() == QEvent::MouseButtonPress) {
		student_index *rec = new student_index;
		this->close();
		rec->show();

	}
	if (obj == ui.btnInformationchange && event->type() == QEvent::MouseButtonPress) {
		student_update *rec = new student_update;
		this->close();
		rec->show();

	}
	else {
		return QWidget::eventFilter(obj, event);
	}

	return false;
}

void student_classify::DataBind() {
	//检索数据
	Classify classify;
	vector<string>VALUES;
	VALUES.push_back("all");
	FileDB::select("classify", classify, VALUES, DataTable);
	
	for (int i = ui.tableWidget->rowCount(); i > 0; i--) {
		ui.tableWidget->removeRow(0);
	}
	int lineCount = -1;
	
	for (int i = 0; i < DataTable.size(); i++) {
		if (i % 5==0) {
			lineCount++;
			ui.tableWidget->insertRow(lineCount);
			ui.tableWidget->setRowHeight(lineCount, 40);//第一行
		}
		QPushButton *btn = new QPushButton;
		
		ui.tableWidget->setCellWidget(lineCount, i%5, btn);

		QSignalMapper* signalMapper = new QSignalMapper(this);
		connect(btn, SIGNAL(clicked()), signalMapper, SLOT(map()));
		signalMapper->setMapping(btn, DataTable[i].id);
		connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(OnClicked(int)));
		btn->setStyleSheet(
			"color:#4695d2;"
			"border:none;"
			"background:white;"
			"text-size:20px;"
		);
		btn->setText(QString::fromLocal8Bit(DataTable[i].name));
	}
}

void student_classify::OnClicked(int id)
{
	classifyConfig::isCheck = 1;
	classifyConfig::classifyId = id;
	student_searchBook *rec = new student_searchBook;
	rec->show();
	this->close();
}
