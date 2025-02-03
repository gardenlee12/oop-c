#include <iostream>
#include <string>
using namespace std;

class Student {
	string name;
public:
	Student(string name = "") : name(name) {}
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};

class Myclass {
	string className;
	Student* p;
	int size;
public:
	Myclass(string className, int size) :className(className), size(size) {
		p = new Student[size];
	};

	~Myclass() {
		delete[] p;
	}


	void setStudentName(int index, string name) {
		if (index >= 0 && index < size) {
			return p[index].setName(name);
		}
		else {
			cout << "잘못된 인덱스입니다.";
		}
	}

	string getStudentName(int index) {
		if (index >= 0 && index < size) {
			return p[index].getName();
		}
		else {
			cout << "잘못된 접근입니다.";
		}
	}

	string getclassName() {
		return className;
	}
};

void main() {
	Myclass* cla = new Myclass("special", 3);

	cla->setStudentName(0, "홍길동");
	cla->setStudentName(1, "김철수");
	cla->setStudentName(2, "최자영");

	cout << "학급 " << cla->getclassName() << "의 학생들은 다음과 같다." << endl;
	for (int i = 0; i < 3; i++) {
		cout << "학생 #" << i + 1 << ":" << cla->getStudentName(i) << endl;
	}

	delete cla;
}