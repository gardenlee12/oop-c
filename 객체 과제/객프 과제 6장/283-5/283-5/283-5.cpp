#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
	string name;
	double marks;
public:
	Student() {};
	Student(string n, double m) : name(n), marks(m) {}
	
	string getname() {
		return name;
	}
	double getmarks() {
		return marks;
	}
	void setname(string n) {
		name = n;
	}
	void setmarks(double m) {
		marks = m;
	}
};

void print(Student& e) {
	cout << "�̸�: " << e.getname() << endl;
	cout << "����: " << e.getmarks() << endl;
}

bool compare(Student& q, Student& p) {
	return p.getmarks() < q.getmarks();
}

int main() {
	vector<Student> objarray;
	
	for (int i = 0; i < 3; i++) {
		Student obj;
		string n;
		double m;
		cout << "�̸��� �Է��ϼ���: "<< endl;
		cin >> n;
		obj.setname(n);
		cout << "������ �Է��ϼ���: " << endl;
		cin >> m;
		obj.setmarks(m);
		objarray.push_back(obj);
	}
	sort(objarray.begin(), objarray.end(), compare);

	for (auto& e : objarray) {
		print(e);
	}
}
