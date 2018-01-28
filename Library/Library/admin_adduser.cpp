#include "admin_adduser.h"
#include "admin_searchuser.h"
#include "admin_index.h"
#include"admin_searchbook.h"
#include"admin_searchuser.h"
#include"admin_classifyshow.h"
#include"admin_classify.h"
#include"filedb.h"
#include"readexcel.h"
#include"library.h"
#include"dept.h"
#include"admin_studentclassify.h"
#include<vector>
#include<QMessageBox>
#include<QFileDialog>
#include<QDateTime>
#include<QPixmap>
#include<QUrl>
#include <qtnetwork/qnetworkaccessmanager>
#include <qtnetwork/QNetworkRequest>
#include <qtnetwork/QNetworkRequest>
#include <qtnetwork/QNetworkReply>
#include<QEventLoop>
#include<regex>
admin_adduser::admin_adduser(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	showFullScreen();
	ui.lineEdit->setEnabled(false);
	ui.lineEdit_2->setEnabled(false);
	ui.lineEdit_3->setEnabled(false);
	ui.lineEdit_4->setEnabled(false);
	ui.lineEdit_5->setEnabled(false);
	ui.btnAddMany->installEventFilter(this);
	ui.lineEdit_6->setEnabled(false);
	ui.btnSearchbook->installEventFilter(this);
	ui.btnClassify->installEventFilter(this);
	ui.btnPersonal->installEventFilter(this);
	ui.btnLogout->installEventFilter(this);
	ui.btnDept->installEventFilter(this);
	ui.btnAdd->installEventFilter(this);
	ui.btnHeadIcon->installEventFilter(this);
	//QRegExp regx("[0-9]+$");//只能输入数字
	//QValidator *validator = new QRegExpValidator(regx, ui.etCode);
	//ui.etCode->setValidator(validator);
	filename = "images/default.png";
	img = new QPixmap;
	img->load(filename);
	ui.btnHeadIcon->setIcon(*img);
	ui.btnHeadIcon->setIconSize(QSize((*img).width(), (*img).height()));
	//不是修改
	isChange = false;

}

admin_adduser::~admin_adduser()
{

}

bool admin_adduser::eventFilter(QObject *obj, QEvent *event)
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
			Library *rec = new Library;
			this->close();
			rec->show();
			event->accept();  //接受退出信号，程序退出
		}
	}

	if (obj == ui.btnSearchbook && event->type() == QEvent::MouseButtonPress) {
		admin_searchbook *rec = new admin_searchbook;
		this->close();
		rec->show();
	}
	if (obj == ui.btnAddMany && event->type() == QEvent::MouseButtonPress) {
		AddMany();
	}
	if (obj == ui.btnPersonal && event->type() == QEvent::MouseButtonPress) {
		admin_index *rec = new admin_index;
		this->close();
		rec->show();
	}
	if (obj == ui.btnDept && event->type() == QEvent::MouseButtonPress) {
		admin_studentclassify *rec = new admin_studentclassify;
		connect(rec, SIGNAL(UpdateDeptSignal(QString)), this, SLOT(UpdateDeptSlot(QString)));
		rec->show();
	}

	if (obj == ui.btnClassify && event->type() == QEvent::MouseButtonPress) {
		admin_classify *rec = new admin_classify;
		this->close();
		rec->show();
	}
	if (obj == ui.btnHeadIcon && event->type() == QEvent::MouseButtonPress) {
		openFileDiag();
	}
	if (obj == ui.btnAdd && event->type() == QEvent::MouseButtonPress) {
		QString userName = ui.etName->text();
		QString userDept = ui.btnDept->text();
		QString userCode = ui.etCode->text();
		QRegExp rx("[1-9][0-9]+");
		QRegExpValidator v(rx, 0);
		QString s;
		int pos = 0;
		int res = v.validate(userCode, pos);
		if (!res) {
			QMessageBox::information(NULL, QString::fromLocal8Bit(""), QString::fromLocal8Bit("学号不符合要求"), QMessageBox::Ok);
			return true;
		}

		QString userMail = ui.etMail->text();
		if (!userCode.length() || !userName.length() || !userMail.length()) {
			QMessageBox::information(NULL, QString::fromLocal8Bit(""), QString::fromLocal8Bit("请填写完整"), QMessageBox::Ok);
			return true;
		}
		if (userCode.length()>15 || userName.length()>20 || userMail.length()>50) {
			QMessageBox::information(NULL, QString::fromLocal8Bit(""), QString::fromLocal8Bit("填写长度太大"), QMessageBox::Ok);
			return true;
		}
		if (userDept == QString::fromLocal8Bit("请选择专业")) {
			QMessageBox::information(NULL, QString::fromLocal8Bit(""), QString::fromLocal8Bit("必须选择专业"), QMessageBox::Ok);
			return true;
		}
		QByteArray ba1 = userName.toLocal8Bit();
		char *name = ba1.data();
		QByteArray ba2 = userCode.toLocal8Bit();
		char *code = ba2.data();
		QByteArray ba3 = userMail.toLocal8Bit();
		char *mail = ba3.data();
		QByteArray ba4 = userDept.toLocal8Bit();
		char *dept = ba4.data();
		QByteArray ba5 = filename.toLocal8Bit();
		char *icon = ba5.data();
		Student student;
		student.setUsername(name);
		student.setPassword("111111");
		student.setMail(mail);
		student.setUsercode(code);
		student.setIcon(icon);
		student.setDept(dept);
		if (ui.radioMan->isChecked()) {
			student.setSex("男");
		}
		else {
			student.setSex("女");
		}
		(*img).save(filename);
		if (!isChange) {
			vector<string>VALUE0;
			VALUE0.push_back("one");
			VALUE0.push_back("usercode");
			Student stu;
			stu.setUsercode(code);
			vector<Student>resSS;
			FileDB::select("student", stu, VALUE0, resSS);
			if (resSS.size() > 0) {
				QMessageBox::information(NULL, QString::fromLocal8Bit(""), QString::fromLocal8Bit("学号重复"), QMessageBox::Ok);
				return true;
			}
			student.setMoney(0);
			vector<Student>resStudent2;
			resStudent2.push_back(student);
			FileDB::insert("student", resStudent2);
			QMessageBox::information(NULL, QString::fromLocal8Bit(""), QString::fromLocal8Bit("添加成功！"), QMessageBox::Ok);
		}
		else {
			vector<string>VALUES;
			VALUES.push_back("one");
			VALUES.push_back("id");
			student.setPassword(resStudent[0].password);
			student.setMoney(resStudent[0].money);
			FileDB::update("student", resStudent[0], student, VALUES);
			QMessageBox::information(NULL, QString::fromLocal8Bit(""), QString::fromLocal8Bit("修改成功！"), QMessageBox::Ok);
		}

	}

	else {
		return QWidget::eventFilter(obj, event);
	}

	return false;
}
void admin_adduser::UpdateDeptSlot(QString id) {
	/*vector<string>VALUES;
	Dept dept;
	dept.setId(id);
	vector<Dept>resDept;
	FileDB::select("dept", dept, VALUES, resDept);*/
	ui.btnDept->setText(id);
}

void admin_adduser::openFileDiag() {
	filename = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("选择图像"), "", tr("Images (*.png *.bmp *.jpg *.tif *.GIF )"));
	if (filename.isEmpty()) {
		return;
	}
	else {
		img = new QPixmap;
		if (!(img->load(filename))) {
			QMessageBox::information(this,
				QString::fromLocal8Bit("打开图像失败"),
				QString::fromLocal8Bit("打开图像失败!"));
		}
		QDateTime time = QDateTime::currentDateTime();   //获取当前时间  
		int timeT = time.toTime_t();   //将当前时间转为时间戳
		filename = "images/" + QString::number(timeT, 10) + ".jpg";
		ui.btnHeadIcon->setIcon(*img);
		ui.btnHeadIcon->setIconSize(QSize((*img).width(), (*img).height()));
		return;
	}
}

void admin_adduser::InitStudent(int id) {
	//修改
	isChange = true;
	ui.etCode->setReadOnly(true);
	Student cla;
	cla.setId(id);
	vector<string>VALUES;
	VALUES.push_back("one");
	VALUES.push_back("id");
	FileDB::select("student", cla, VALUES, resStudent);
	ui.etName->setText(QString::fromLocal8Bit(resStudent[0].username));
	ui.etCode->setText(QString::fromLocal8Bit(resStudent[0].usercode));
	ui.etMail->setText(QString::fromLocal8Bit(resStudent[0].mail));
	if (strcmp("男", resStudent[0].sex)) {
		ui.radioMan->setChecked(true);
	}
	else {
		ui.radioWoman->setChecked(true);
	}
	ui.btnDept->setText(QString::fromLocal8Bit(resStudent[0].dept));
	filename = QString::fromLocal8Bit(resStudent[0].icon);
	if (!strstr(resStudent[0].icon, "images")) {
		QNetworkAccessManager manager;
		QEventLoop loop;
		QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(filename)));
		//请求结束并下载完成后，退出子事件循环
		QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
		//开启子事件循环
		loop.exec();
		QByteArray jpegData = reply->readAll();
		QPixmap pixmap;
		pixmap.loadFromData(jpegData);
		//改变图片大小
		ui.btnHeadIcon->setIcon(pixmap);
		ui.btnHeadIcon->setIconSize(QSize((pixmap).width(), (pixmap).height()));
	}
	else {
		img = new QPixmap;
		img->load(filename);
		//改变图片大小
		ui.btnHeadIcon->setIcon(*img);
		ui.btnHeadIcon->setIconSize(QSize((*img).width(), (*img).height()));
	}
}
void admin_adduser::AddMany() {
	QMessageBox::information(NULL, QString::fromLocal8Bit(""), QString::fromLocal8Bit("请选择Excel文件,文件中列序按照学号、姓名、性别、专业、邮箱排好"), QMessageBox::Ok);
	QString excelPath = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("选择Exccel"), "", tr("Excel (*.xls *.xlsx)"));
	if (excelPath.isEmpty()) {
		return;
	}
	ReadExcel read;
	excelPath.replace(QString("/"), QString("\\"));
	read.openExcel(excelPath);
	int col, row;
	read.getInfo(row, col);
	Student student;

	int sumBooks = 0;
	vector<Student>resBookk;
	for (int i = 1; i <= row; i++) {

		string usercode = read.getCellData(i, 1).toLocal8Bit();
		if (!checkCode(usercode))continue;
		student.setUsercode((char*)usercode.data());
		string cla = read.getCellData(i, 4).toLocal8Bit();
		int clasres = checkClass(cla);

		if (clasres == -1)continue;
		student.setDept((char*)cla.data());
		string name = read.getCellData(i, 2).toLocal8Bit();
		string sex = read.getCellData(i, 3).toLocal8Bit();
		string mail = read.getCellData(i, 5).toLocal8Bit();
		if (name.length() == 0 || name.length() >= 50)continue;
		if (sex.length() == 0 || sex.length() >= 10)continue;
		if (mail.length() == 0 || mail.length() >= 50)continue;
		string icon = "images/defaultIcon.jpg";
		student.setIcon((char*)icon.data());
		student.setUsername((char*)name.data());
		student.setMail((char*)mail.data());
		student.setPassword("111111");
		student.setMoney(0);
		student.setSex((char*)sex.data());
		resBookk.push_back(student);		
		sumBooks++;
	}
	FileDB::insert("student", resBookk);
	QString success = QString::number(sumBooks);
	QMessageBox::information(NULL, QString::fromLocal8Bit(""), success + QString::fromLocal8Bit("个学生导入成功"), QMessageBox::Ok);
}

bool admin_adduser::checkCode(string code) {
	if (code.length() == 0 || code.length() >= 50)return false;
	QRegExp rx("[1-9][0-9]+");
	QRegExpValidator v(rx, 0);
	QString s;
	int pos = 0;
	int res = v.validate(QString::fromStdString(code), pos);
	if (!res) {
		return false;
	}
	vector<string>VALUE0;
	VALUE0.push_back("one");
	VALUE0.push_back("usercode");
	Student stu;
	stu.setUsercode((char*)code.data());
	vector<Student>resSS;
	FileDB::select("student", stu, VALUE0, resSS);
	if (resSS.size() > 0) {
		return false;
	}
	return true;
}

int admin_adduser::checkClass(string cla) {
	//判断ISBN是否重复
	Dept book;
	vector<string>VALUES;
	vector<Dept>resBook;
	VALUES.push_back("one");
	VALUES.push_back("name");
	book.setName((char*)cla.data());
	FileDB::select("dept", book, VALUES, resBook);

	if (resBook.size() > 0) {
		return resBook[0].id;
	}
	else {
		return -1;
	}
}