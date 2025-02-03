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

        cout << "상자 이름: " << name << endl;
        cout << "상자의 길이: " << l << endl;
        cout << "상자의 너비: " << w << endl;
        cout << "상자의 높이: " << h << endl;
        cout << "상자의 부피: " << getVolume() << endl;
    }

    bool empty() {
        return (length == 0 && width == 0 && height == 0);
    }

    string getname() {
        return name;
    }
};

int main() {
    Box obj1("상자 1", 0, 0, 0);
    Box obj2("상자 2", 3, 2, 4);

    obj1.print();
    if (obj1.empty()) {
        cout << obj1.getname() << "(은)는 비어 있습니다." << endl;
    }
    else {
        cout << obj1.getname() << "(은)는 비어 있지 않습니다." << endl;
    }

    obj2.print();
    if (obj2.empty()) {
        cout << obj2.getname() << "(은)는 비어 있습니다." << endl;
    }
    else {
        cout << obj2.getname() << "(은)는 비어 있지 않습니다." << endl;
    }
    system("pause");
}