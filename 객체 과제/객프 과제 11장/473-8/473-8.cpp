#include <iostream>

using namespace std;

class Human {
	string name;
	int age;
public:
	Human(string name, int age) {
		this->name = name;
		this->age = age;
	}

	void setname(string& name) {
		this->name = name;
	}
	void setage(int& age) {
		this->age = age;
	}

	string getname() {
		return name;
	}

	int getage() {
		return age;
	}
	
	void print() {
		cout << "�̸�: " << getname() << endl;
		cout << "����: " << getage() <<"��" << endl;
		cout << endl;
	}
};

class Student:public Human {
	string major;
public:
	Student(string name, int age, string major) :Human(name,age){
		this->major = major;
	}
};

void main() {
	Human s1("����", 18);
	Human s2("����", 21);
	Human s3("���", 50);

	s1.print();
	s2.print();
	s3.print();
}