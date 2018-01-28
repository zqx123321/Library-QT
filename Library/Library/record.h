#pragma once
using namespace std;
#include<string>
class Record {
private:
	static const int TIME_SIZE = 30;
public:
	int id;
	int bookId;
	int studentId;
	char time[TIME_SIZE];
	int type;
	float money;
	int dirty;
	int getId() {
		return id;
	}
	void setId(int id) {
		this->id = id;
	}
	int getBookId() {
		return bookId;
	}
	void setBookId(int bookId) {
		this->bookId = bookId;
	}
	int getStudentId() {
		return studentId;
	}
	void setStudentId(int studentId) {
		this->studentId = studentId;
	}
	char* getTime() {
		return time;
	}
	void setTime(char* time) {
		for (int i = 0; i < strlen(time); i++)
			this->time[i] = time[i];
		this->time[strlen(time)] = '\0';
	}
	int getType() {
		return type;
	}
	void setType(int type) {
		this->type = type;
	}
	float getMoney() {
		return money;
	}
	void setMoney(int monry) {
		this->money = monry;
	}
	int getDirty() {
		return dirty;
	}
	void setDirty(int dirty) {
		this->dirty = dirty;
	}
	string getElemType(string Elem) {
		if (Elem == "id") return typeid(id).name();
		else if (Elem == "bookId") return typeid(bookId).name();
		else if (Elem == "studentId") return typeid(studentId).name();
		else if (Elem == "time") return typeid(time).name();
		else if (Elem == "type") return typeid(type).name();
		else if (Elem == "money") return typeid(money).name();
		else if (Elem == "dirty") return typeid(dirty).name();
		else {
			throw "Field  Not Found!";
		}
	}
	int getIntElemByName(string Elem) {
		if (Elem == "id") return id;
		else if (Elem == "bookId") return bookId;
		else if (Elem == "studentId") return studentId;
		else if (Elem == "type") return type;
		else if (Elem == "dirty") return dirty;
		else {
			throw "Field  Not Found!";
		}
	}
	float getFloatElemByName(string Elem) {
		if (Elem == "money") return  money;
		else {
			throw "Field  Not Found!";
		}
	}
	char* getCharElemByName(string Elem) {
		if (Elem == "time") return  time;
		else {
			throw "Field  Not Found!";
		}
	}
};
