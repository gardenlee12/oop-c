#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;

    void setperson(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void print() {
        cout << "�̸� : " << name << endl << "���� : " << age << endl;
    }
};

void main()
{
    Person ps;

    ps.setperson("��ö��", 21);

    ps.print();
}