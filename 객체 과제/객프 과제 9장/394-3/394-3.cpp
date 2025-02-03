#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyClass {
	char* stored;
public:
	MyClass(const char* str);
	MyClass(const MyClass& other);
	~MyClass();
	void printStored();
};

MyClass::MyClass(const char* str) {
	stored = new char[strlen(str) + 1];
	strcpy(stored, str);
}
MyClass::MyClass(const MyClass& other) {
	stored = new char[strlen(other.stored) + 1];
	strcpy(stored, other.stored);
}

MyClass::~MyClass() {
	delete[] stored;
}

void MyClass::printStored() {
	cout << "Stored: " << stored << endl;
}

int main() {
	MyClass obj1("Original String");
	obj1.printStored(); // 출력: Stored: Original String

	// 테스트용 복사 생성자 호출
	MyClass obj2 = obj1;
	obj2.printStored(); // 출력: Stored: Original String

	return 0;
}