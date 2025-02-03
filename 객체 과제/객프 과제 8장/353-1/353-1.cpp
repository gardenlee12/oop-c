#include <iostream>

using namespace std;

int main() {
	
	int size, num, count;
	cout << "몇개의 정수를 입력합니까?";
	cin >> size;
	
	int* dynamicArray = new int[size];
	
	for (int i = 0; i < size; i++) {
		cout << "정수를 입력하시오: ";
		cin >> dynamicArray[i];
	}
	
	cout << "입력된 정수는: ";
	for (int i = 0; i < size; i++) {
		cout << dynamicArray[i]<<"," ;
	}

	delete[] dynamicArray;
}