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
			cout << "�߸��� �ε����Դϴ�.";
		}
	}

	string getStudentName(int index) {
		if (index >= 0 && index < size) {
			return p[index].getName();
		}
		else {
			cout << "�߸��� �����Դϴ�.";
		}
	}

	string getclassName() {
		return className;
	}
};

void main() {
	Myclass* cla = new Myclass("special", 3);

	cla->setStudentName(0, "ȫ�浿");
	cla->setStudentName(1, "��ö��");
	cla->setStudentName(2, "���ڿ�");

	cout << "�б� " << cla->getclassName() << "�� �л����� ������ ����." << endl;
	for (int i = 0; i < 3; i++) {
		cout << "�л� #" << i + 1 << ":" << cla->getStudentName(i) << endl;
	}

	delete cla;
}