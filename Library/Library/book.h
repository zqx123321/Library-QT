#pragma once
#include<string>
using namespace std;
class Book {
private:
	static const int ISBN_SIZE = 15;
	static const int NAME_SIZE = 50;
	static const int AUTHOR_SIZE = 50;
	static const int COVER_SIZE = 50;
	static const int PUBLISH_SIZE = 50;
public:
	int id;
	char ISBN[ISBN_SIZE];
	char name[NAME_SIZE];
	char author[AUTHOR_SIZE];
	char cover[COVER_SIZE];
	char publish[PUBLISH_SIZE];
	int classifyId;
	float score;
	int count;
	int nowCount;
	int dirty;
	int getId() {
		return id;
	}
	void setId(int id) {
		this->id = id;
	}
	char* getISBN() {
		return ISBN;
	}
	void setISBN(char* ISBN) {
		for (int i = 0; i < strlen(ISBN); i++)
			this->ISBN[i] = ISBN[i];
		this->ISBN[strlen(ISBN)] = '\0';
	}
	char* getName() {
		return name;
	}
	void setName(char* name) {
		for (int i = 0; i < strlen(name); i++)
			this->name[i] = name[i];
		this->name[strlen(name)] = '\0';
	}
	char* getAuthor() {
		return author;
	}
	void setAuthor(char* author) {
		for (int i = 0; i < strlen(author); i++)
			this->author[i] = author[i];
		this->author[strlen(author)] = '\0';
	}
	char* getCover() {
		return cover;
	}
	void setCover(char* cover) {
		for (int i = 0; i < strlen(cover); i++)
			this->cover[i] = cover[i];
		this->cover[strlen(cover)] = '\0';
	}
	char* getPublish() {
		return publish;
	}
	void setPublish(char* publish) {
		for (int i = 0; i < strlen(publish); i++)
			this->publish[i] = publish[i];
		this->publish[strlen(publish)] = '\0';
	}
	int getClassifyId() {
		return classifyId;
	}
	void setClassifyId(int classifyId) {
		this->classifyId = classifyId;
	}
	float getScore() {
		return score;
	}
	void setScore(float score) {
		this->score = score;
	}
	int getCount() {
		return count;
	}
	void setCount(int count) {
		this->count = count;
	}
	int getNowCount() {
		return nowCount;
	}
	void setNowCount(int nowCount) {
		this->nowCount = nowCount;
	}
	int getDirty() {
		return dirty;
	}
	void setDirty(int dirty) {
		this->dirty = dirty;
	}
	string getElemType(string Elem) {
		if (Elem == "id") return typeid(id).name();
		else if (Elem == "ISBN") return typeid(ISBN).name();
		else if (Elem == "name") return typeid(name).name();
		else if (Elem == "author") return typeid(author).name();
		else if (Elem == "cover") return typeid(cover).name();
		else if (Elem == "publish") return typeid(publish).name();
		else if (Elem == "classifyId") return typeid(classifyId).name();
		else if (Elem == "score") return typeid(score).name();
		else if (Elem == "count") return typeid(count).name();
		else if (Elem == "dirty") return typeid(dirty).name();
		else {
			throw "Field  Not Found!";
		}
	}
	int getIntElemByName(string Elem) {
		if (Elem == "id") return id;
		else if (Elem == "classifyId") return classifyId;
		else if (Elem == "count") return count;
		else if (Elem == "dirty") return dirty;
		else {
			throw "Field  Not Found!";
		}
	}
	float getFloatElemByName(string Elem) {
		if (Elem == "score") return score;
		else {
			throw "Field  Not Found!";
		}
	}
	char* getCharElemByName(string Elem) {
		if (Elem == "ISBN") return  ISBN;
		else if (Elem == "name") return name;
		else if (Elem == "author") return author;
		else if (Elem == "cover") return cover;
		else if (Elem == "publish") return publish;
		else {
			throw "Field  Not Found!";
		}
	}
};
