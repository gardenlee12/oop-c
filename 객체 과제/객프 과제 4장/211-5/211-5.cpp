#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dice {
	int face;
public:
	void roll();
};

void Dice::roll() {
	face = (int)(rand() % 6 + 1);
	cout << "�ֻ��� ��=" << face;
}

int main() {
	srand(static_cast<unsigned>(time(0)));
	Dice obj;
	obj.roll();
	system("pause");
}
