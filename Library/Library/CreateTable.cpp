#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<fstream>
using namespace std;
string DB_NAME;
vector<string>FIELD_NAME;
vector<string>FIELD_VALUE;
vector<pair<string,int>>FIELD_SIZE;

//类模板，将字符串转化为任意类型
template<class T>
inline T fromString(const string &str) {
	istringstream is(str);
	T v;
	is >> v;
	return v;
}


/*输入检测函数 参数num为可输入数字的总个数*/
int inputCheck(int num) {

	int *Rule = new int[num]();

	for (int i = 0; i<num; i++)
		Rule[i] = i + 1;
	string input;

	while (1)
	{
		cin >> input;
		int num = fromString<int>(input);
		for (int i = 0; i<num; i++)
			if (num == Rule[i]) return num;
		cout << "输入的数字不正确，请重新输入：" << endl;
	}
}

string getFun(string type,string name,string nameH) {
	char first = nameH[0];
	first -= 32;
	nameH=nameH.substr(1);
	nameH = first + nameH;
	return type + " get" + nameH + "() {\nreturn " + name + ";\n}\n";
}

string setFun(string type, string name, string nameH) {
	char first = nameH[0];
	first -= 32;
	nameH = nameH.substr(1);
	nameH = first + nameH;
	if (type != "char*") {
		return "void set" + nameH + "(int " + name + ") {\nthis->" + name + " = " + name + ";\n}\n";
	}
	else {
		string temp(" = '\\0';", 8);
		return "void set"+nameH+"(char* " + name + ") {\nfor (int i = 0; i < strlen(" + name + "); i++)\nthis->" + name + "[i] = " + name + "[i];\nthis->" + name + "[strlen(" + name + ")] "+temp+"\n}\n";
	}
}

/*
void main() {
begin:
	cout << "请输入表的名称（小写字母）：" << endl;
	cin >> DB_NAME;
	system("cls");
	cout << "请输入字段的个数(1~10)：" << endl;
	int field_count = 0;
	field_count = inputCheck(10);
	int flag = 0;
	for (int i = 1; i <= field_count; i++) {
		system("cls");
		string name;
		int choice;
		cout << "请输入第" << (i) << "个字段的名称（小写字母）：" << endl;
		cin >> name;
		if (name == "id")flag = 1;
		FIELD_NAME.push_back(name);
		cout << "请输入第" << (i) << "个字段的数据类型编号（1.int    2.float    3.char*）:" << endl;
		choice = inputCheck(3);
		if (choice == 3) {
			int length;
			cout << "请输入字符串的长度：" << endl;
			cin >> length;
			FIELD_VALUE.push_back("char*");
			FIELD_SIZE.push_back(make_pair(name, length));
		}
		else if(choice==2) {
			FIELD_VALUE.push_back("float");
		}
		else {
			FIELD_VALUE.push_back("int");
		}
	}
	system("cls");
	if (!flag) {
		cout << "当前表不含主键id,不符合规范，请重新创建！";
		system("pause");
		system("cls");
		FIELD_NAME.clear();
		FIELD_SIZE.clear();
		FIELD_SIZE.clear();
		goto begin;
	}
	cout << "正在创建表" + DB_NAME + "，并建立关系映射......" << endl;
	system("cls");

	ofstream writeFile;
	writeFile.open(DB_NAME + "Info.dat");
	int start_id = 0;
	writeFile.write((char*)&start_id, sizeof(start_id));
	writeFile.close();

	writeFile.open(DB_NAME + ".dat");
	writeFile.close();
	char first_c = DB_NAME[0];
	first_c -= 32;
	string NEW_NAME = first_c + DB_NAME.substr(1);

	string ORM_CPP = "using namespace std;\n#include<string>\nclass "
		+ NEW_NAME + "{\nprivate:\nstatic const int ";

	for (int i = 0; i < FIELD_SIZE.size(); i++) {
		ORM_CPP += FIELD_SIZE[i].first + "_SIZE";
		stringstream ss;
		string str;
		ss << FIELD_SIZE[i].second;
		ss >> str;
		ORM_CPP += "= " + str + ";\n";
	}

	ORM_CPP += "public:\n";

	for (int i = 0; i < FIELD_NAME.size(); i++) {
		if (FIELD_VALUE[i] != "char*")
			ORM_CPP += FIELD_VALUE[i] +" "+ FIELD_NAME[i] + ";\n";
		else
			ORM_CPP += "char "+ FIELD_NAME[i] + "[" + FIELD_NAME[i] + "_SIZE" + "]" + ";\n";
	}

	for (int i = 0; i < FIELD_NAME.size(); i++) {
		ORM_CPP += getFun(FIELD_VALUE[i], FIELD_NAME[i], FIELD_NAME[i]);
		ORM_CPP += setFun(FIELD_VALUE[i], FIELD_NAME[i], FIELD_NAME[i]);
	}

	ORM_CPP += "string getElemType(string Elem) {\n";
	ORM_CPP += "if (Elem == \"" + FIELD_NAME[0] + "\") return typeid(" + FIELD_NAME[0] + ").name();\n";
	for (int i = 1; i < FIELD_NAME.size(); i++) {
		ORM_CPP += "else if (Elem == \"" + FIELD_NAME[i] + "\") return typeid(" + FIELD_NAME[i] + ").name();\n";
	}
	ORM_CPP += "else {\nthrow \"Field  Not Found!\";\n}\n}\n";


	ORM_CPP += "int getIntElemByName(string Elem){\n";
	ORM_CPP += "if (Elem == \"id\") return id;\n";
	for (int i = 0; i < FIELD_VALUE.size(); i++) {
		if (FIELD_VALUE[i] == "int" && FIELD_NAME[i] != "id") {
			ORM_CPP += "else if (Elem == \"" + FIELD_NAME[i] + "\") return " + FIELD_NAME[i] + ";\n";
		}
	}
	ORM_CPP += "else {\nthrow \"Field  Not Found!\";\n}\n}\n";

	string first = "";
	for (int i = 0; i < FIELD_VALUE.size(); i++) {
		if (FIELD_VALUE[i] == "float") {
			first = FIELD_NAME[i];
			break;
		}
	}
	if (first.length() > 0) {
		ORM_CPP += "float getFloatElemByName(string Elem){\n";
		ORM_CPP += "if (Elem == \""+first+"\") return  " + first + ";\n";
		for (int i = 0; i < FIELD_VALUE.size(); i++) {
			if (FIELD_VALUE[i] == "float"&&FIELD_NAME[i] != first) {
				ORM_CPP += "else if (Elem == \"" + FIELD_NAME[i] + "\") return " + FIELD_NAME[i] + ";\n";
			}
		}
		ORM_CPP += "else {\nthrow \"Field  Not Found!\";\n}\n}\n";
	}
	else {
		ORM_CPP += "float getFloatElemByName(string Elem){\n return 1; \n}\n";
	}

	first = "";
	for (int i = 0; i < FIELD_VALUE.size(); i++) {
		if (FIELD_VALUE[i] == "char*") {
			first = FIELD_NAME[i];
			break;
		}
	}
	if (first.length() > 0) {
		ORM_CPP += "char* getCharElemByName(string Elem){\n";
		ORM_CPP += "if (Elem == \"" + first + "\") return  " + first + ";\n";
		for (int i = 0; i < FIELD_VALUE.size(); i++) {
			if (FIELD_VALUE[i] == "char*" && FIELD_NAME[i] != first) {
				ORM_CPP += "else if (Elem == \"" + FIELD_NAME[i] + "\") return " + FIELD_NAME[i] + ";\n";
			}
		}
		ORM_CPP += "else {\nthrow \"Field  Not Found!\";\n}\n}\n";
	}
	else {
		ORM_CPP += "char* getCharElemByName(string Elem){\n return ""; \n}\n";
	}
	ORM_CPP += "};\n";

	writeFile.open(DB_NAME + ".cpp");
	writeFile << ORM_CPP;
	writeFile.close();
	cout << "表" + DB_NAME + "创建成功，关系映射创建成功！" << endl;
	cout << "请将同级目录下的"+DB_NAME+".cpp、" + DB_NAME + ".dat、" + DB_NAME + "info.dat连同FileDB.cpp共同添加进工程中！" << endl;
	

	system("pause");
}*/