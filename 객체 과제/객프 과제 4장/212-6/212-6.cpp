#include <iostream>
#include <string>

using namespace std; 
class Employee
{
public:
    string name;
    int age, salary, years;

    void set_epl(string name, int age, int salary)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    void epl_print(){
        cout << "Employee : " << endl
                  << "ÀÌ¸§ : " << name << endl
                  << "³ªÀÌ : " << age << endl
                  << "¿ù±Þ : " << salary << endl;
    }
};

int main(){
    Employee Employee1;

    Employee1.set_epl("±èÃ¶¼ö", 38, 2000000);

    Employee1.epl_print();

    system("pause");
}
