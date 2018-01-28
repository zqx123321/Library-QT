#pragma once
using namespace std;
#include<string>
class Student {
private:
	static const int USERCODE_SIZE = 15;
	static const int PASSWORD_SIZE = 50;
	static const int USERNAME_SIZE = 20;
	static const int SEX_SIZE = 5;
	static const int DEPT_SIZE = 50;
	static const int ICON_SIZE = 50;
	static const int MAIL_SIZE = 50;
public:
	int id;
	char usercode[USERCODE_SIZE];
	char username[USERNAME_SIZE];
	char password[USERNAME_SIZE];
	char sex[SEX_SIZE];
	char dept[DEPT_SIZE];
	char icon[ICON_SIZE];
	char mail[MAIL_SIZE];
	float money;
	int dirty;
	int getId() {
		return id;
	}
	void setId(int id) {
		this->id = id;
	}
	char* getUsercode() {
		return usercode;
	}
	void setUsercode(char* usercode) {
		for (int i = 0; i < strlen(usercode); i++)
			this->usercode[i] = usercode[i];
		this->usercode[strlen(usercode)] = '\0';
	}
	char* getUsername() {
		return username;
	}
	void setUsername(char* username) {
		for (int i = 0; i < strlen(username); i++)
			this->username[i] = username[i];
		this->username[strlen(username)] = '\0';
	}
	char* getPassword() {
		return password;
	}
	void setPassword(char* password) {
		for (int i = 0; i < strlen(password); i++)
			this->password[i] = password[i];
		this->password[strlen(password)] = '\0';
	}
	char* getSex() {
		return sex;
	}
	void setSex(char* sex) {
		for (int i = 0; i < strlen(sex); i++)
			this->sex[i] = sex[i];
		this->sex[strlen(sex)] = '\0';
	}
	char* getDept() {
		return dept;
	}
	void setDept(char* dept) {
		for (int i = 0; i < strlen(dept); i++)
			this->dept[i] = dept[i];
		this->dept[strlen(dept)] = '\0';
	}
	char* getIcon() {
		return icon;
	}
	void setIcon(char* icon) {
		for (int i = 0; i < strlen(icon); i++)
			this->icon[i] = icon[i];
		this->icon[strlen(icon)] = '\0';
	}
	char* getMail() {
		return mail;
	}
	void setMail(char* mail) {
		for (int i = 0; i < strlen(mail); i++)
			this->mail[i] = mail[i];
		this->mail[strlen(mail)] = '\0';
	}
	float getMoney() {
		return money;
	}
	void setMoney(float money) {
		this->money = money;
	}
	int getDirty() {
		return dirty;
	}
	void setDirty(int dirty) {
		this->dirty = dirty;
	}
	string getElemType(string Elem) {
		if (Elem == "id") return typeid(id).name();
		else if (Elem == "usercode") return typeid(usercode).name();
		else if (Elem == "username") return typeid(username).name();
		else if (Elem == "password") return typeid(password).name();
		else if (Elem == "sex") return typeid(sex).name();
		else if (Elem == "dept") return typeid(dept).name();
		else if (Elem == "icon") return typeid(icon).name();
		else if (Elem == "mail") return typeid(mail).name();
		else if (Elem == "money") return typeid(money).name();
		else if (Elem == "dirty") return typeid(dirty).name();
		else {
			throw "Field  Not Found!";
		}
	}
	int getIntElemByName(string Elem) {
		if (Elem == "id") return id;
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
		if (Elem == "usercode") return  usercode;
		else if (Elem == "username") return username;
		else if (Elem == "password") return password;
		else if (Elem == "sex") return sex;
		else if (Elem == "dept") return dept;
		else if (Elem == "icon") return icon;
		else if (Elem == "mail") return mail;
		else {
			throw "Field  Not Found!";
		}
	}
};

