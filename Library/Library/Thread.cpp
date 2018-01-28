#include"Thread.h"
#include"recommendBuffer.h"
#include<QPixmap>
#include<QUrl>
#include <qtnetwork/qnetworkaccessmanager>
#include <qtnetwork/QNetworkRequest>
#include <qtnetwork/QNetworkRequest>
#include <qtnetwork/QNetworkReply>
#include<QEventLoop>
Thread::Thread(QObject *parent)
{
}

Thread::~Thread()
{

}

void Thread::run()
{
	if (!recommendBuffer::headUrlLocal.length()) {
		QNetworkAccessManager manager;
		QEventLoop loop;
		QNetworkReply *reply = manager.get(QNetworkRequest(recommendBuffer::headUrl));
		//请求结束并下载完成后，退出子事件循环
		QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
		//开启子事件循环
		loop.exec();
		QByteArray jpegData = reply->readAll();
		QPixmap pixmap;
		pixmap.loadFromData(jpegData);
		//改变图片大小
		pixmap = pixmap.scaled(110, 130, Qt::KeepAspectRatio);
		recommendBuffer::headBuffer.push_back(pixmap);
	}
	else {
		QPixmap pixmap;
		pixmap.load(recommendBuffer::headUrlLocal);
		//改变图片大小
		pixmap = pixmap.scaled(110, 130, Qt::KeepAspectRatio);
		recommendBuffer::headBuffer.push_back(pixmap);
	}

	for (int i = 0; i < recommendBuffer::urlBuffer.size(); i++) {
		if (!recommendBuffer::isPostBack) {
			QNetworkAccessManager manager;
			QEventLoop loop;
			QNetworkReply *reply = manager.get(QNetworkRequest(recommendBuffer::urlBuffer[i]));
			//请求结束并下载完成后，退出子事件循环
			QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
			//开启子事件循环
			loop.exec();
			QByteArray jpegData = reply->readAll();
			QPixmap pixmap;
			pixmap.loadFromData(jpegData);
			pixmap = pixmap.scaled(110, 130, Qt::KeepAspectRatio);
			recommendBuffer::picBuffer.push_back(pixmap);
		}
	}
	for (int i = 0; i < recommendBuffer::urlBufferLocal.size(); i++) {
		if (!recommendBuffer::isPostBack) {
			QPixmap pixmap;
			pixmap.load(recommendBuffer::urlBufferLocal[i]);
			pixmap = pixmap.scaled(110, 130, Qt::KeepAspectRatio);
			recommendBuffer::picBuffer.push_back(pixmap);
		}
	}
	emit UpdateSignal();
}
