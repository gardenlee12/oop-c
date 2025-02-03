#include <iostream>
#include <string>

using namespace std;

class BankAccount {
	string number;
	int balance;
public:
	void init(string, int);
	void deposit(int amount);
	void withdraw(int amount);
};

void BankAccount::init(string number, int balance) {
	this->number = number;
	this->balance = balance;
	cout << "���� �ܾ�:" << balance << endl;
}
void BankAccount::deposit(int amount) {
	balance += amount;
	cout << "after deposit" << "(" << amount << ")" << " ���� �ܾ�:" << balance << endl;
}
void BankAccount::withdraw(int amount) {
	balance -= amount;
	cout << "after withdraw" << "(" << amount << ")" << " ���� �ܾ�:" << balance << endl;
}

int main() {
	BankAccount info;
	info.init("ȫ�浿", 1000000);
	info.deposit(1000000);
	info.withdraw(1000000);
	system("pause");
}
