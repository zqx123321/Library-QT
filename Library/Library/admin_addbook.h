#ifndef ADMIN_ADDBOOK_H
#define ADMIN_ADDBOOK_H

#include <QWidget>
#include "ui_admin_addbook.h"
#include"book.h"
class admin_addbook : public QWidget
{
	Q_OBJECT

public:
	admin_addbook(QWidget *parent = 0);
	~admin_addbook();
	void openFileDiag();

public slots:
	void UpdateClassSlot(QString);
	void InitBook(int id);

protected:
	bool eventFilter(QObject *obj, QEvent *event);


private:
	Ui::admin_addbook ui;
	QString filename;
	QPixmap* img;
	bool isChange;
	vector<Book>resBook;
	int BookId;
	void AddMany();
	bool checkISBN(string);
	bool checkCount(string Count);
	bool checkScore(string Score);
	int checkClass(string);
};

#endif // ADMIN_ADDBOOK_H
