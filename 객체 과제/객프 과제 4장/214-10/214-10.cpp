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
	cout << "ÇöÀç ÀÜ¾×:" << balance << endl;
}
void BankAccount::deposit(int amount) {
	balance += amount;
	cout << "after deposit" << "(" << amount << ")" << " ÇöÀç ÀÜ¾×:" << balance << endl;
}
void BankAccount::withdraw(int amount) {
	balance -= amount;
	cout << "after withdraw" << "(" << amount << ")" << " ÇöÀç ÀÜ¾×:" << balance << endl;
}

int main() {
	BankAccount info;
	info.init("È«±æµ¿", 1000000);
	info.deposit(1000000);
	info.withdraw(1000000);
	system("pause");
}
