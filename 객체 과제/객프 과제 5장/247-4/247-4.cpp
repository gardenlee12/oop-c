#include<iostream>

using namespace std;

class Movie {
	string title;
	string director;
	double rating;
public:
	Movie() {}
	Movie(string t, string d, double r) :title(t), director(d), rating(r) {}
	void getinfo(string& t, string& d, double& r) {
		t = title;
		d = director;
		r = rating;
	}
	void setinfo(string t, string d, double r) {
		title = t;
		director = d;
		rating = r;
	}
	void print() {
		cout << "��ȭ ����: " << title << endl;
		cout << "��ȭ ����: " << director << endl;
		cout << "��ȭ ����: " << rating << endl;
	}
};
int main() {
	Movie obj1("Ÿ��Ÿ��", "���ӽ� ī�޷�", 9.5);
	Movie obj2("��������", "�� ����", 8.34);
	cout << "��ȭ #1" << endl;
	obj1.print();
	cout << "\n��ȭ #2" << endl;
	obj2.print();
	system("pause");
}
