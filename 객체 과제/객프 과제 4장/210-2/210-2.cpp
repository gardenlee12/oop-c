#include <iostream>
using namespace std;

class Computer {
	string name;
	int RAM;
	double cpu_speed;
public:
	void setComputer(string name, int RAM, double cpu_speed);
	void print();
};

void Computer::setComputer(string name, int RAM, double cpu_speed) {
	this->name = name;
	this->RAM = RAM;
	this->cpu_speed = cpu_speed;
}

void Computer::print() {
	cout << "�̸�: " << name << endl;
	cout << "RAM: " << 8 << endl;
	cout << "CPU �ӵ�: " << 4.2 << endl;
}
int main() {
	Computer obj;
	obj.setComputer("���ǽ���ǻ��", 8, 4.2);
	obj.print();
	system("pause");
}
