#pragma once
#include<qstring.h>
class userConfig
{
public:
	static QString username;
	static QString password;
	static int id;
	userConfig();
	~userConfig();
};