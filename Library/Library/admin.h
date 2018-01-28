#pragma once
using namespace std;
#include<string>
class Admin {
private:
	static const int ACCOUNT_SIZE = 15;
	static const int PASSWORD_SIZE = 50;
	static const int MAIL_SIZE = 50;
public:
	int id;
	char account[ACCOUNT_SIZE];
	char password[PASSWORD_SIZE];
	char mail[MAIL_SIZE];
	int dirty;
	int getId() {
		return id;
	}
	void setId(int id) {
		this->id = id;
	}
	char* getAccount() {
		return account;
	}
	void setAccount(char* account) {
		for (int i = 0; i < strlen(account); i++)
			this->account[i] = account[i];
		this->account[strlen(account)] = '\0';
	}
	char* getPassword() {
		return password;
	}
	void setPassword(char* password) {
		for (int i = 0; i < strlen(password); i++)
			this->password[i] = password[i];
		this->password[strlen(password)] = '\0';
	}
	char* getMail() {
		return mail;
	}
	void setMail(char* mail) {
		for (int i = 0; i < strlen(mail); i++)
			this->mail[i] = mail[i];
		this->mail[strlen(mail)] = '\0';
	}
	int getDirty() {
		return dirty;
	}
	void setDirty(int dirty) {
		this->dirty = dirty;
	}
	string getElemType(string Elem) {
		if (Elem == "id") return typeid(id).name();
		else if (Elem == "account") return typeid(account).name();
		else if (Elem == "password") return typeid(password).name();
		else if (Elem == "mail") return typeid(mail).name();
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
		return 1;
	}
	char* getCharElemByName(string Elem) {
		if (Elem == "account") return  account;
		else if (Elem == "password") return password;
		else if (Elem == "mail") return mail;
		else {
			throw "Field  Not Found!";
		}
	}
};
