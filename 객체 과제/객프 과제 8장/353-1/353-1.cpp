#include <iostream>

using namespace std;

int main() {
	
	int size, num, count;
	cout << "��� ������ �Է��մϱ�?";
	cin >> size;
	
	int* dynamicArray = new int[size];
	
	for (int i = 0; i < size; i++) {
		cout << "������ �Է��Ͻÿ�: ";
		cin >> dynamicArray[i];
	}
	
	cout << "�Էµ� ������: ";
	for (int i = 0; i < size; i++) {
		cout << dynamicArray[i]<<"," ;
	}

	delete[] dynamicArray;
}