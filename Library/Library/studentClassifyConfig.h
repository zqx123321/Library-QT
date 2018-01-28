#pragma once
#include<qstring.h>
class studentClassifyConfig
{
public:
	//是否点击了分类按钮
	static int isCheck;
	//分类id
	static char* classifyName;
	studentClassifyConfig();
	~studentClassifyConfig();
};
