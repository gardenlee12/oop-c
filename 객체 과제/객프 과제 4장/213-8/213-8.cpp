#include <iostream>

using namespace std;

class Complex {
public:
	double r;
	double i;
	void print();

	Complex(double r, double i) : r(r), i(i) {};
};

void Complex::print() {
	if (i >= 0) {
		cout << r << "+" << i << "i" << endl;
	}
	else {
		cout << r << "-" << -i << "i" << endl;
	}
}

int main() {
	Complex num1(5, 3);
	Complex num2(3, -4);
	num1.print();
	num2.print();
	system("pause");
}
