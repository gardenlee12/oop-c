#include <iostream>
using namespace std;

class Box {
    int length;
    int width;
    int height;
    string name;

public:
    Box() : length(0), width(0), height(0) {}
    Box(string n, int l, int w, int h) : name(n), length(l), width(w), height(h) {}

    void getinfo(int& l, int& w, int& h) {
        l = length;
        w = width;
        h = height;
    }

    void setinfo(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    int getVolume() {
        return length * width * height;
    }

    void print() {
        int l, w, h;
        getinfo(l, w, h);

        cout << "���� �̸�: " << name << endl;
        cout << "������ ����: " << l << endl;
        cout << "������ �ʺ�: " << w << endl;
        cout << "������ ����: " << h << endl;
        cout << "������ ����: " << getVolume() << endl;
    }

    bool empty() {
        return (length == 0 && width == 0 && height == 0);
    }

    string getname() {
        return name;
    }
};

int main() {
    Box obj1("���� 1", 0, 0, 0);
    Box obj2("���� 2", 3, 2, 4);

    obj1.print();
    if (obj1.empty()) {
        cout << obj1.getname() << "(��)�� ��� �ֽ��ϴ�." << endl;
    }
    else {
        cout << obj1.getname() << "(��)�� ��� ���� �ʽ��ϴ�." << endl;
    }

    obj2.print();
    if (obj2.empty()) {
        cout << obj2.getname() << "(��)�� ��� �ֽ��ϴ�." << endl;
    }
    else {
        cout << obj2.getname() << "(��)�� ��� ���� �ʽ��ϴ�." << endl;
    }
    system("pause");
}