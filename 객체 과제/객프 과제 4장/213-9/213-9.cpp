#include <iostream>

using namespace std;

class Triangle {
	int b, h;
public:
	void area();
	Triangle(int base, int higer) : b(base), h(higer) {};
};

void Triangle::area() {
	cout << "밑변이 " << b << "이고 " << "높이가 " << h << "인 삼각형의 면적:" << b * h / 2;
}
int main() {
	Triangle value(3, 4);
	value.area();
	system("pause");
}
