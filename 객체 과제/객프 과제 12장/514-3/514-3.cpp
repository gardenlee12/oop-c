#include <iostream>

using namespace std;

class HomeAppliance {
public:
	int price;
	HomeAppliance(int p) : price(p){}
	virtual double getprice() = 0;

};

class Refrigerator : public HomeAppliance {
public:
	Refrigerator(int p) : HomeAppliance(p) {}
	double getprice() {
		return static_cast<double>(price) / 100 * 95;
	}
};

class Television : public HomeAppliance {
public:
	Television(int p) :HomeAppliance(p) {}
	double getprice() {
		return static_cast<double>(price) / 100 * 90;
	}
};

int main() {
	HomeAppliance* a1 = new Refrigerator(1000000);
	HomeAppliance* a2 = new Television(800000);

	cout << "가격(냉장고): " << a1->getprice() << endl;
	cout << "가격(텔레비전): " << a2->getprice() << endl;
}