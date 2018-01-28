#pragma once
#include<qstring.h>
#include<QPixmap>

class recommendBuffer
{

public:

	//是否第一次加载
	static bool isPostBack;
	//图片数据
	static QVector<QPixmap>picBuffer;
	static QVector<QPixmap>headBuffer;
	static QVector<QUrl>urlBuffer;
	static QVector<QString>urlBufferLocal;
	static QVector<int>idBuffer;
	static QUrl headUrl;
	static QString headUrlLocal;
	recommendBuffer();
	~recommendBuffer();
	static void Resert();
};