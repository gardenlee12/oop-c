#include <iostream>

using namespace std;

class Box {
	double length;
	double width;
	double height;
public:
	static int count;
	Box(double l = 2.0, double w = 2.0, double h = 2.0) {
		length = l;
		width = w;
		height = h;
		count++;
	}
	double Volume() {
		return length * width * height;
	}
	static int getcount(){
		return count;
	}
};
int Box::count = 0;

int main() {
	Box b1;
	Box b2;

	cout << "ÀüÃ¼ °´Ã¼ ¼ö: " << b2.getcount() << endl;
}