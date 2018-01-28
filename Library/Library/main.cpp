#include "library.h"
#include <QtWidgets/QApplication>
#include <QTextCodec> 
#include"test.h"
#include"student_update.h"
#include<iostream>
#include<vector>
#include"userConfig.h"
#include<student_classify.h>
#include"admin_index.h"
#include"selectData.h"
using namespace std;
int main(int argc, char *argv[])
{
	QTextCodec * BianMa = QTextCodec::codecForName("GBK");
	QApplication a(argc, argv);
	/*userConfig::id = 0;
	userConfig::username = "1234567";
	userConfig::password = "111";*/
	selectData w;
	w.show();

	return a.exec();
}
