#include <iostream>
using namespace std;

class Sum {
public:
	int n1, n2;
	void init(int x, int y);
	void add();
};

void Sum::init(int x, int y) {
	n1 = x;
	n2 = y;
}

void Sum::add() {
	cout << "첫번째 정수 : " << n1 << endl;
	cout << "두번째 정수 : " << n2 << endl;
	cout << "연산 결과:" << n1 + n2 << endl;
}
int main() {
	Sum obj;
	obj.init(10, 20);
	obj.add();
	system("pause");
}