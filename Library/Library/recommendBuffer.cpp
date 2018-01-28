#include "recommendBuffer.h"
#include<qstring.h>
#include<QPixmap>
#include<string>
#include <QUrl>
bool recommendBuffer::isPostBack = false;
QVector<QPixmap>recommendBuffer::picBuffer;
QVector<QUrl>recommendBuffer::urlBuffer;
QVector<QString>recommendBuffer::urlBufferLocal;
QVector<int>recommendBuffer::idBuffer;
QVector<QPixmap>recommendBuffer::headBuffer;
QUrl recommendBuffer::headUrl;
QString recommendBuffer::headUrlLocal = "";
recommendBuffer::recommendBuffer()
{
}


recommendBuffer::~recommendBuffer()
{
}
void recommendBuffer::Resert() {
	isPostBack = false;
	picBuffer.clear();
	urlBuffer.clear();
	urlBufferLocal.clear();
	idBuffer.clear();
	headBuffer.clear();
}
