#include <iostream>

using namespace std;

class Triangle {
	int b, h;
public:
	void area();
	Triangle(int base, int higer) : b(base), h(higer) {};
};

void Triangle::area() {
	cout << "�غ��� " << b << "�̰� " << "���̰� " << h << "�� �ﰢ���� ����:" << b * h / 2;
}
int main() {
	Triangle value(3, 4);
	value.area();
	system("pause");
}
