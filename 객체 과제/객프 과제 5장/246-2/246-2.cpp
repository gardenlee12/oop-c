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
        cout << "객체 소멸" << endl;
    }
    
};

void print(Airplane& obj) {
    cout << "비행기의 이름: " << obj.getname() << endl;
    cout << "비행기의 용량: " << obj.getcapacity() << endl;
    cout << "비행기의 속도: " << obj.getspeed() << " km/h" << endl;
}

int main() {
    Airplane obj1;
    Airplane obj2;
    obj1.setname("보잉 787");
    obj1.setcapacity(900);
    obj1.setspeed(300);
    obj2.setname("에어버스 350");
    obj2.setcapacity(400);
    obj2.setspeed(1000);

    cout << "비행기 #1" << endl;
    print(obj1);
    cout << "비행기 #2" << endl;
    print(obj2);
    system("pause");
}