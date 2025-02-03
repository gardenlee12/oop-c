#include <iostream>

using namespace std;

int main() {
	int age = -1;
	try {		
		cout << "나이를 입력하시오: ";
		cin >> age;
		if (age <= 0) 
			throw age;
		cout << "나이는 " << age << "세 입니다." << endl;
	}
	catch (int e){
		cout << "오류: 양수를 입력하여야 함" << endl;
	}
}