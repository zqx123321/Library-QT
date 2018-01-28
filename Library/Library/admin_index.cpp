#include "admin_index.h"
#include<string>
#include"admin_updatepassword.h"
#include"admin_searchuser.h"
#include"admin_searchbook.h"
#include"admin_classify.h"
#include"userConfig.h"
#include<QTextCodec>
#include"admin.h"
#include<QMessageBox>
#include"filedb.h"
#include"library.h"
admin_index::admin_index(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	showFullScreen();
	ui.etSname->setEnabled(false);
	ui.lineEdit_13->setEnabled(false);
	ui.pushButton_7->installEventFilter(this);
	ui.btnSubmit->installEventFilter(this);
	ui.btnSearchuser->installEventFilter(this);
	ui.btnLogout->installEventFilter(this);
	ui.btnClassify->installEventFilter(this);
	ui.btnSearchbook->installEventFilter(this);
	InitThisPage();
}

admin_index::~admin_index()
{

}
void admin_index::InitThisPage() {
	Admin admin;
	admin.setId(userConfig::id);
	vector<string>VALUES;
	VALUES.push_back("one");
	VALUES.push_back("id");
	vector<Admin>resAdmin;
	FileDB::select("admin", admin, VALUES, resAdmin);
	ui.etSname->setText(QString::fromLocal8Bit("欢迎您，")+chartoqs(resAdmin[0].account));
	ui.etNewemail->setText(chartoqs(resAdmin[0].mail));
}

bool admin_index::eventFilter(QObject *obj, QEvent *event) {
	QTextCodec * BianMa = QTextCodec::codecForName("GBK");
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
	if (obj == ui.pushButton_7 && event->type() == QEvent::MouseButtonPress) {
		admin_updatepassword *rec = new admin_updatepassword;
		rec->show();
		this->close();
	}
	if (obj == ui.btnSearchuser && event->type() == QEvent::MouseButtonPress) {
		admin_searchuser *rec = new admin_searchuser;
		this->close();
		rec->show();
	}
	if (obj == ui.btnSearchbook && event->type() == QEvent::MouseButtonPress) {
		admin_searchbook *rec = new admin_searchbook;
		this->close();
		rec->show();
	}
	if (obj == ui.btnClassify && event->type() == QEvent::MouseButtonPress) {
		admin_classify *rec = new admin_classify;
		this->close();
		rec->show();
	}
	if (obj == ui.btnSubmit && event->type() == QEvent::MouseButtonPress) {
		//获取要更改的信息
		string newmail = qstostr(ui.etNewemail->text());
		string::size_type idx;
		idx = newmail.find("@");
		if (idx == string::npos) {
			QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("请输入正确的邮箱"), QMessageBox::Ok);
			return true;
		}
		if (newmail.length() >50) {
			QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("填写内容太长"), QMessageBox::Ok);
			return true;
		}
		char* ch2;
		QByteArray ba2 = ui.etNewemail->text().toLatin1();
		ch2 = ba2.data();
		Admin admin;
		admin.setId(userConfig::id);
		vector<string>VALUES;
		VALUES.push_back("one");
		VALUES.push_back("id");
		vector<Admin>resAdmin;
		FileDB::select("admin", admin, VALUES, resAdmin);
		resAdmin[0].setMail(ch2);
		int res=FileDB::update("admin", resAdmin[0], resAdmin[0], VALUES);
		if(res>0)
			QMessageBox::information(NULL, BianMa->toUnicode(""), BianMa->toUnicode("修改成功"), QMessageBox::Ok);
		return true;
	}
	return false;
}

QString admin_index::strtoqs(const string &s)

{

	return QString(QString::fromLocal8Bit(s.c_str()));

}

string admin_index::qstostr(const QString &s){

	return string((const char*)s.toLocal8Bit());

}

QString admin_index::chartoqs(char *p) {
	string s = p;
	return QString(QString::fromLocal8Bit(s.c_str()));
}
