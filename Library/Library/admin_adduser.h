#ifndef ADMIN_ADDUSER_H
#define ADMIN_ADDUSER_H

#include <QWidget>
#include "ui_admin_adduser.h"
#include"student.h"
#include<vector>
class admin_adduser : public QWidget
{
	Q_OBJECT

public:
	admin_adduser(QWidget *parent = 0);
	~admin_adduser();
	void openFileDiag();
protected:
	bool eventFilter(QObject *obj, QEvent *event);
public slots:
	void UpdateDeptSlot(QString);
	void InitStudent(int id);
private:
	Ui::admin_adduser ui;
	QString filename;
	QPixmap* img;
	bool isChange;
	vector<Student>resStudent;
	void AddMany();
	bool checkCode(string);
	int checkClass(string);
	

};

#endif // ADMIN_ADDUSER_H
