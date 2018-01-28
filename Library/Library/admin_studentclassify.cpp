#include "admin_studentclassify.h"
#include "dept.h"
#include"studentClassifyConfig.h"
#include "admin_searchbook.h"
#include "admin_index.h"
#include"admin_searchuser.h"
#include"admin_classify.h" 
#include"filedb.h"
#include"library.h"
#include<QMessageBox>
#include<QSignalMapper>
admin_studentclassify::admin_studentclassify(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.tableWidget->setColumnCount(4);
	//studentClassifyConfig::isCheck = 0;
	ui.btnSearchbook->installEventFilter(this);
	ui.btnClassify->installEventFilter(this);
	ui.btnLogout->installEventFilter(this);
	ui.btnPersonal->installEventFilter(this);
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置不可编辑	
	ui.tableWidget->verticalHeader()->setVisible(false); //设置行号不可见
	ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//表宽度自适应
	ui.tableWidget->setShowGrid(false);
	// 设置表头不可见，需要添加QHeadView头文件 
	ui.tableWidget->horizontalHeader()->setVisible(false);// 水平不可见 
	ui.tableWidget->verticalHeader()->setVisible(false);// 垂直不可见
	DataBind();
}

admin_studentclassify::~admin_studentclassify()
{
}

bool admin_studentclassify::eventFilter(QObject *obj, QEvent *event)
{
	if (obj == ui.btnLogout && event->type() == QEvent::MouseButtonPress) {
		QMessageBox::information(NULL, QString::fromLocal8Bit(""), QString::fromLocal8Bit("请先选择专业"), QMessageBox::Ok);
	}
	if (obj == ui.btnSearchbook && event->type() == QEvent::MouseButtonPress) {
		QMessageBox::information(NULL, QString::fromLocal8Bit(""), QString::fromLocal8Bit("请先选择专业"), QMessageBox::Ok);
	}
	if (obj == ui.btnPersonal && event->type() == QEvent::MouseButtonPress) {
		QMessageBox::information(NULL, QString::fromLocal8Bit(""), QString::fromLocal8Bit("请先选择专业"), QMessageBox::Ok);
	}
	if (obj == ui.btnClassify && event->type() == QEvent::MouseButtonPress) {
		QMessageBox::information(NULL, QString::fromLocal8Bit(""), QString::fromLocal8Bit("请先选择专业"), QMessageBox::Ok);
	}
	else {
		return QWidget::eventFilter(obj, event);
	}

	return false;
}

void admin_studentclassify::DataBind() {
	//检索数据
	Dept dept;
	vector<string>VALUES;
	VALUES.push_back("all");
	FileDB::select<Dept>("dept", dept, VALUES, DataTable);

	for (int i = ui.tableWidget->rowCount(); i > 0; i--) {
		ui.tableWidget->removeRow(0);
	}
	int lineCount = -1;

	for (int i = 0; i < DataTable.size(); i++) {
		if (i % 4 == 0) {
			lineCount++;
			ui.tableWidget->insertRow(lineCount);
			ui.tableWidget->setRowHeight(lineCount, 40);//第一行
		}
		QPushButton *btn = new QPushButton;

		ui.tableWidget->setCellWidget(lineCount, i % 4, btn);

		QSignalMapper* signalMapper = new QSignalMapper(this);
		connect(btn, SIGNAL(clicked()), signalMapper, SLOT(map()));
		signalMapper->setMapping(btn, QString::fromLocal8Bit(DataTable[i].name));
		connect(signalMapper, SIGNAL(mapped(QString)), this, SLOT(OnClicked(QString)));
		btn->setStyleSheet(
			"color:#4695d2;"
			"border:none;"
			"background:white;"
			"text-size:20px;"
		);
		btn->setText(QString::fromLocal8Bit(DataTable[i].name));
	}
}

void admin_studentclassify::OnClicked(QString id)
{
	if (studentClassifyConfig::isCheck) {
		QByteArray ba = id.toLocal8Bit();
		char *name = ba.data();
		studentClassifyConfig::classifyName = name;
		admin_searchuser *rec = new admin_searchuser;
		rec->show();
		this->close();
	}
	else {
		emit UpdateDeptSignal(id);
		this->close();
	}
}
