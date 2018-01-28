#include "student_updatepassword.h"
#include "student_update.h"
#include<string>
#include"filedb.h"
#include"student.h"
#include"userConfig.h"
#include"library.h"
#include<QMessageBox>
#include <QTextCodec>
#include"student_index.h"
#include"student_searchbook.h"
#include<vector>
#include"userConfig.h"
#include"student_repay.h"
#include"recommendBuffer.h"
student_updatePassword::student_updatePassword(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	showFullScreen();
	ui.lineEdit->setEnabled(false);
	ui.lineEdit_2->setEnabled(false);
	ui.lineEdit_3->setEnabled(false);
	ui.btnInformationchange->installEventFilter(this);
	ui.btnPersonal->installEventFilter(this);
	ui.btnSearchbook->installEventFilter(this);
	ui.btnLogout->installEventFilter(this);
	ui.pushButton->installEventFilter(this);
	ui.pushButton_3->installEventFilter(this);
	ui.pushButton_4->installEventFilter(this);
}

student_updatePassword::~student_updatePassword()
{

}

bool student_updatePassword::eventFilter(QObject *obj, QEvent *event) {
	QTextCodec * BianMa = QTextCodec::codecForName("GBK");
	if (obj == ui.pushButton && event->type() == QEvent::MouseButtonPress) {
		student_update *rec = new student_update;
		this->close();
		rec->show();
	}
	if (obj == ui.btnPersonal && event->type() == QEvent::MouseButtonPress) {
		student_index *rec = new student_index;
		this->close();
		rec->show();
	}
	if (obj == ui.btnSearchbook && event->type() == QEvent::MouseButtonPress) {
		student_searchBook *rec = new student_searchBook;
		this->close();
		rec->show();
	}
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
	if (obj == ui.pushButton_3 && event->type() == QEvent::MouseButtonPress) {
		student_repay *rec = new student_repay;
		this->close();
		rec->show();
		return true;
	}
	if (obj == ui.pushButton_4 && event->type() == QEvent::MouseButtonPress) {
		//修改密码
		if (ui.etPassword->text() == userConfig::password) {
			string newpassword = qstostr(ui.etNewpassword->text());
			if (newpassword.length() >50) {
				QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("填写内容太长"), QMessageBox::Ok);
				return true;
			}
			if (newpassword.length() ==0) {
				QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("不可为空"), QMessageBox::Ok);
				return true;
			}
			string newpassword_2 = qstostr(ui.etNewpassword_2->text());
			if (newpassword!="") {
				if (newpassword == newpassword_2) {
					//获取新密码
					char* thenewpassword;
					QByteArray ba = ui.etNewpassword->text().toLatin1();
					thenewpassword = ba.data();
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
					//修改用户
					//Student newstudent;
					//newstudent.setUsercode(res[0].usercode);
					//newstudent.setUsername(res[0].username);
					//newstudent.setPassword(thenewpassword);//修改密码
					//newstudent.setSex(res[0].sex);
					//newstudent.setDept(res[0].dept);
					//newstudent.setIcon(res[0].icon);
					//newstudent.setMail(res[0].mail);
					//newstudent.setMoney(res[0].money);
					res[0].setPassword(thenewpassword);
					int judge = FileDB::update("student", primarystudent, res[0], VALUES_2);

					if (judge>0) {

						QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("修改成功"), QMessageBox::Ok);
						return true;
					}
					else {
						QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("未知错误"), QMessageBox::Ok);
						return true;
					}
				}
				else{
					QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("两次输入的新密码不一致"), QMessageBox::Ok);
					return true;
				}
			}
			else {
				QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("新密码不能为空"), QMessageBox::Ok);
				return true;
			}
		}
		else {
			QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("输入密码不正确"), QMessageBox::Ok);
			return true;
		}
	}
	return false;
}

QString student_updatePassword::strtoqs(const string &s)

{

	return QString(QString::fromLocal8Bit(s.c_str()));

}

string student_updatePassword::qstostr(const QString &s)

{

	return string((const char*)s.toLocal8Bit());

}
