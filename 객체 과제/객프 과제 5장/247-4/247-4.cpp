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
		cout << "영화 제목: " << title << endl;
		cout << "영화 감독: " << director << endl;
		cout << "영화 평점: " << rating << endl;
	}
};
int main() {
	Movie obj1("타이타닉", "제임스 카메론", 9.5);
	Movie obj2("지오스톰", "딘 데블린", 8.34);
	cout << "영화 #1" << endl;
	obj1.print();
	cout << "\n영화 #2" << endl;
	obj2.print();
	system("pause");
}
