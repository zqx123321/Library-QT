#include "student_update.h"
#include<string>
#include"filedb.h"
#include"student.h"
#include"student_updatepassword.h"
#include"userConfig.h"
#include"library.h"
#include <QTextCodec>
#include"student_index.h"
#include"student_searchbook.h"
#include<QMessageBox>
#include<QFileDialog>
#include<QDateTime>
#include"student_repay.h"
#include"recommendBuffer.h"
student_update::student_update(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	showFullScreen();
	ui.lineEdit->setEnabled(false);
	ui.lineEdit_2->setEnabled(false);
	ui.lineEdit_3->setEnabled(false);
	//ui.lineEdit_4->setEnabled(false);
	ui.lineEdit_5->setEnabled(false);
	ui.lineEdit_6->setEnabled(false);
	ui.lineEdit_7->setEnabled(false);
	ui.lineEdit_8->setEnabled(false);
	ui.lineEdit_9->setEnabled(false);
	ui.btnInformationchange->installEventFilter(this);
	ui.btnPersonal->installEventFilter(this);
	ui.btnHeadIcon->installEventFilter(this);
	ui.btnLogout->installEventFilter(this);
	ui.btnSearchbook->installEventFilter(this);
	ui.pushButton_2->installEventFilter(this);
	ui.pushButton_3->installEventFilter(this);
	ui.pushButton_4->installEventFilter(this);
	isChangeIcon = false;
	InitThisPage();
}

student_update::~student_update()
{

}

bool student_update::eventFilter(QObject *obj, QEvent *event) {
	QTextCodec * BianMa = QTextCodec::codecForName("GBK");
	if (obj == ui.pushButton_2 && event->type() == QEvent::MouseButtonPress) {
		student_updatePassword *rec = new student_updatePassword;
		this->close();
		rec->show();
		return true;
	}
	if (obj == ui.btnPersonal && event->type() == QEvent::MouseButtonPress) {
		student_index *rec = new student_index;
		this->close();
		rec->show();
		return true;
	}
	if (obj == ui.btnSearchbook && event->type() == QEvent::MouseButtonPress) {
		student_searchBook *rec = new student_searchBook;
		this->close();
		rec->show();
		return true;
	}
	if (obj == ui.pushButton_3 && event->type() == QEvent::MouseButtonPress) {
		student_repay *rec = new student_repay;
		this->close();
		rec->show();
		return true;
	}
	if (obj == ui.btnHeadIcon && event->type() == QEvent::MouseButtonPress) {
		openFileDiag();
		return true;
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
	if (obj == ui.pushButton_4 && event->type() == QEvent::MouseButtonPress) {
		string newmail = qstostr(ui.lineEdit_10->text());
		if (newmail.length() >50) {
			QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("填写内容太长"), QMessageBox::Ok);
			return true;
		}
		if (newmail.length()==0) {
			QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("不可为空"), QMessageBox::Ok);
			return true;
		}
		if (newmail!="") {
			string::size_type idx;
			idx = newmail.find("@");
			if (idx == string::npos) {
				QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("请输入正确的邮箱"), QMessageBox::Ok);
				return true;
			}
			else {
				//修改用户邮箱
				//获取新邮箱
				char* thenewmail;
				QByteArray ba = ui.lineEdit_10->text().toLatin1();
				thenewmail = ba.data();
				
				//获取用户原来的所有信息
				Student student;
				vector<string>VALUES_1;
				vector<Student>res;
				VALUES_1.push_back("one");
				VALUES_1.push_back("id");
				student.setId(userConfig::id);
				FileDB::select("student", student, VALUES_1, res);
				//设定要修改的用户
				Student primarystudent;
				vector<string>VALUES_2;
				VALUES_2.push_back("one");
				VALUES_2.push_back("id");
				primarystudent.setId(userConfig::id);
				res[0].setMail(thenewmail);
				if (isChangeIcon) {
					//获取新头像
					char* thenewicon;
					QByteArray ba2 = filename.toLatin1();
					thenewicon = ba2.data();
					res[0].setIcon(thenewicon);
					(*img).save(filename);
					recommendBuffer::headBuffer.clear();
					recommendBuffer::headBuffer.push_back(*img);
				}
				int judge = FileDB::update("student", primarystudent, res[0], VALUES_2);
				
				
				if (judge>0) {

					QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("修改成功"), QMessageBox::Ok);
					return true;
				}
			}
		}
		else {
			QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("新邮箱不能为空"), QMessageBox::Ok);
			return true;
		}
	}
	return false;
}
void student_update::openFileDiag() {
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
		filename="images/"+ QString::number(timeT, 10)+".jpg";
		ui.btnHeadIcon->setIcon(*img);
		isChangeIcon = true;
		ui.btnHeadIcon->setIconSize(QSize((*img).width(), (*img).height()));
		return;
	}
}

void student_update::InitThisPage() {
	//获取当前学生信息
	Student student;
	vector<string>VALUES; 
	vector<Student>res; 
	VALUES.push_back("one"); 
	VALUES.push_back("id"); 
	student.setId(userConfig::id); 
	FileDB::select("student", student, VALUES, res);
	//将信息加载到窗体中
	ui.lineEdit_7->setText(chartoqs(res[0].username));
	ui.lineEdit_8->setText(chartoqs(res[0].usercode));
	ui.lineEdit_9->setText(chartoqs(res[0].dept));
	ui.lineEdit_10->setText(chartoqs(res[0].mail));
	filename=strtoqs(res[0].icon);
	QPixmap pixmap = recommendBuffer::headBuffer[0];
	ui.btnHeadIcon->setText("");
	ui.btnHeadIcon->setStyleSheet(
		"color:#4695d2;"
		"border:none;"
		"background:white;"
		"text-size:20px;"
	);
	ui.btnHeadIcon->setIcon(pixmap);
	ui.btnHeadIcon->setIconSize(QSize(pixmap.width(), pixmap.height()));
}

QString student_update::strtoqs(const string &s)

{

	return QString(QString::fromLocal8Bit(s.c_str()));

}

string student_update::qstostr(const QString &s)

{

	return string((const char*)s.toLocal8Bit());

}

QString student_update::chartoqs(char *p) {
	string s = p;
	return QString(QString::fromLocal8Bit(s.c_str()));
}


