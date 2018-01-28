#pragma once
#ifndef READEXCEL_H  
#define READEXCEL_H  

#include <map>  
#include <string>  
#include <vector>  
#include <iostream>  
#include <QAxObject>  
#include <QString>  
#include <QFile>  


class Position
{
public:
	Position() {
		m_row = 0;
		m_col = 0;
	}

	Position(int row, int col) {
		m_row = row;
		m_col = col;
	}
public:
	int m_row;
	int m_col;

public:
	bool operator<(const Position & ct) const   // 两个const是必需的。  
	{
		if (m_row < ct.m_row) {
			return true;
		}
		else if (m_row == ct.m_row) {
			if (m_col < ct.m_col) {
				return true;
			}
		}
		return false;
	}
};

class ReadExcel
{
public:
	ReadExcel();
	~ReadExcel();

public:
	//打开excel文件  
	bool openExcel(const QString& filename);
	//获取 指定单元格的数据  
	QString getCellData(const int& row, const int& col);
	//获取 行数，列数  
	void getInfo(int& row, int& col) const;

private:
	void getALLfromExcel();

private:
	int m_row;    //行  
	int m_col;    //列  
	QString m_filename;
	QAxObject* m_excel;
	std::map<Position, QString> m_mapdata;
	Position p;
};

#endif // READEXCEL_H  