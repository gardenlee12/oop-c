#include <iostream>
using namespace std;

int main() {
	float temp[] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	for (float& i : temp) {
		float c;
		c = (i - 32.0) * 5.0 / 9.0;
		cout << i << " " << c << "\n";
	}
	system("pause");
	return 0;
}