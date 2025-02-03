#include <iostream>
using namespace std;

class Airplane {
    string name;
    int capacity;
    int speed;

public:
    Airplane() {
        name = " ";
        capacity = 0;
        speed = 0;
    }
    Airplane(string n, int c, int s) : name(n), capacity(c), speed(s) {}

    string getname() {
        return name;
    }
    int getcapacity() {
        return capacity;
    }
    int getspeed() {
        return speed;   
    }

    void setname(string n) {
        name = n;
    }
    void setcapacity(int c) {
        capacity = c;
    }
    void setspeed(int s) {
        speed = s;
    }
    ~Airplane() {
        cout << "��ü �Ҹ�" << endl;
    }
    
};

void print(Airplane& obj) {
    cout << "������� �̸�: " << obj.getname() << endl;
    cout << "������� �뷮: " << obj.getcapacity() << endl;
    cout << "������� �ӵ�: " << obj.getspeed() << " km/h" << endl;
}

int main() {
    Airplane obj1;
    Airplane obj2;
    obj1.setname("���� 787");
    obj1.setcapacity(900);
    obj1.setspeed(300);
    obj2.setname("������� 350");
    obj2.setcapacity(400);
    obj2.setspeed(1000);

    cout << "����� #1" << endl;
    print(obj1);
    cout << "����� #2" << endl;
    print(obj2);
    system("pause");
}