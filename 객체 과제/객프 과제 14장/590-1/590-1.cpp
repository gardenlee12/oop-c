#include <iostream>

using namespace std;

int main() {
	int age = -1;
	try {		
		cout << "���̸� �Է��Ͻÿ�: ";
		cin >> age;
		if (age <= 0) 
			throw age;
		cout << "���̴� " << age << "�� �Դϴ�." << endl;
	}
	catch (int e){
		cout << "����: ����� �Է��Ͽ��� ��" << endl;
	}
}