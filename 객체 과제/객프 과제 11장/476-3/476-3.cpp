#include <iostream>

using namespace std;

class  Employee{
	string name;
	int salary;	
public:
	Employee(string n,int s) : name(n), salary(s){}

	void setname(string& name) {
		this->name = name;
	}
	void setsalary(int& salary) {
		this->salary = salary;
	}

	string getname() {
		return name;
	}
	int getsalary() {
		return salary;
	}
	void computesalary() {
		cout << getname() << "의 월급은 " << getsalary() << "만원" << endl;
	}
};

class Manager : public Employee {
	int bonus;
public:
	Manager(string n, int s, int b) : Employee(n, s), bonus(b){}

	void setbonus(int& bonus) {
		this->bonus = bonus;
	}

	int getbonus() {
		return bonus;
	}

	void computeSalary() {
		cout << getname() << "의 월급은 " << getsalary() + getbonus() << "만원" << endl;
	}
};

int main() {
	Employee h1("홍길동", 300);
	Manager h2("김철수", 300, 20);
	h1.computesalary();
	h2.computeSalary();
}