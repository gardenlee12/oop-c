#include <iostream>

using namespace std;

class Shape {
	int x, y;
	string color;
public:
	Shape(int x, int y, string c): x(x), y(y), color(c){}
	void setx(int& x) {
		this->x = x;
	}
	void sety(int& y) {
		this->y = y;
	}
	void setcolor(string& color) {
		this->color = color;
	}
	int getx() {
		return x;
	}
	int gety() {
		return y;
	}
	string getcolor() {
		return color;
	}
	double getArea() {
		
	}
};

class Circle : public Shape {
	double radius;
public:
	Circle(int x, int y, string c, double r) : Shape(x, y, c), radius(r) {}

	void setradius(double& r) {
		this->radius = radius;
	}

	double getradius() {
		return radius;
	}

	double getArea() {
		return 3.14159 * radius * radius; 
	}
};

int main() {
	Circle myCircle(0, 0, "빨강", 5.0);

	cout << "원의 정보:" << endl;
	cout << "위치: (" << myCircle.getx() << ", " << myCircle.gety() << ")" << endl;
	cout << "색깔: " << myCircle.getcolor() << endl;
	cout << "반지름: " << myCircle.getradius() << endl;
	cout << "면적: " << myCircle.getArea() << endl;

	return 0;
}