#pragma once
using namespace std;
#include<string>
class BookMap {
private:
public:
	int id;
	int bookId;
	int bookNum;
	int isOut;
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
	int getBookNum() {
		return bookNum;
	}
	void setBookNum(int bookNum) {
		this->bookNum = bookNum;
	}
	int getIsOut() {
		return isOut;
	}
	void setIsOut(int isOut) {
		this->isOut = isOut;
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
		else if (Elem == "bookNum") return typeid(bookNum).name();
		else if (Elem == "isOut") return typeid(isOut).name();
		else if (Elem == "dirty") return typeid(dirty).name();
		else {
			throw "Field  Not Found!";
		}
	}
	int getIntElemByName(string Elem) {
		if (Elem == "id") return id;
		else if (Elem == "bookId") return bookId;
		else if (Elem == "bookNum") return bookNum;
		else if (Elem == "isOut") return isOut;
		else if (Elem == "dirty") return dirty;
		else {
			throw "Field  Not Found!";
		}
	}
	float getFloatElemByName(string Elem) {
		return 1;
	}
	char* getCharElemByName(string Elem) {
		return "";
	}

};
