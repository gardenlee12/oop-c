#include <iostream>
using namespace std;

class Employee {
	string name;
	int age;
	int salary;
	int years;
public:
	Employee() : name(" "), age(0), salary(0), years(0) {}
	Employee(string n, int a, int s, int y) : name(n), age(a), salary(s), years(y) {}

	string getname() {
		return name;
	}
	int getage() {
		return age;
	}
	int getsalary() {
		return salary;
	}
	int getyears() {
		return years;
	}

	void setname(string n) {
		name = n;
	}
	void setage(int a) {
		age = a;
	}
	void setsalary(int s) {
		salary = s;
	}
	void setyears(int y) {
		years = y;
	}
};

void print(Employee& obj) {
	cout << "직원 정보" << endl;
	cout << "이름: " << obj.getname() << endl;
	cout << "나이: " << obj.getage() << endl;
	cout << "월급: " << obj.getsalary() << endl;
	cout << "경력: " << obj.getyears() << endl;
}

void main() {
	Employee obj;

	obj.setname("홍길동");
	obj.setage(26);
	obj.setsalary(1000000);
	obj.setyears(1);

	print(obj);
}