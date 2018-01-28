#include "selectData.h"
#include"filedb.h" 
#include"library.h"
selectData::selectData(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.btnInitial->installEventFilter(this);
	ui.btnRandom->installEventFilter(this);
	ui.btnNormal->installEventFilter(this);
	//ui.btnNormal->setVisible(false);
}

bool selectData::eventFilter(QObject *obj, QEvent *event) {
	if (obj == ui.btnInitial && event->type() == QEvent::MouseButtonPress) {
		FileDB::rootPath = "initial/";
		Library *rec = new Library;
		rec->showFullScreen();
		this->close();
		return true;
	}
	if (obj == ui.btnRandom && event->type() == QEvent::MouseButtonPress) {
		FileDB::rootPath = "random/";
		Library *rec = new Library;
		rec->showFullScreen();
		this->close();
		return true;
	}
	if (obj == ui.btnNormal && event->type() == QEvent::MouseButtonPress) {
		FileDB::rootPath = "beautiful/";
		Library *rec = new Library;
		rec->showFullScreen();
		this->close();
		return true;
	}
	return false;
}

selectData::~selectData()
{
}
