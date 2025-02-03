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
        cout << "ÀÌ¸§ : " << name << endl << "³ªÀÌ : " << age << endl;
    }
};

void main()
{
    Person ps;

    ps.setperson("±èÃ¶¼ö", 21);

    ps.print();
}