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
	cout << "ù��° ���� : " << n1 << endl;
	cout << "�ι�° ���� : " << n2 << endl;
	cout << "���� ���:" << n1 + n2 << endl;
}
int main() {
	Sum obj;
	obj.init(10, 20);
	obj.add();
	system("pause");
}