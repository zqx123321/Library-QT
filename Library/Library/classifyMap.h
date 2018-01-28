using namespace std;
#include<string>
class ClassifyMap {
private:
public:
	int id;
	int bookId;
	int classifyId;
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
	int getClassifyId() {
		return classifyId;
	}
	void setClassifyId(int classifyId) {
		this->classifyId = classifyId;
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
		else if (Elem == "classifyId") return typeid(classifyId).name();
		else if (Elem == "dirty") return typeid(dirty).name();
		else {
			throw "Field  Not Found!";
		}
	}
	int getIntElemByName(string Elem) {
		if (Elem == "id") return id;
		else if (Elem == "bookId") return bookId;
		else if (Elem == "classifyId") return classifyId;
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
