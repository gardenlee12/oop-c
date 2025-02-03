#include <iostream>
using namespace std;

class Box{
    double length;
    double width;
    double height;
public:
    Box(double l = 0.0, double w = 0.0, double h = 0.0) : length(l), width(w), height(h){}
    double Volume(){
        return length * width * height;
    }
    void print(){
        cout << "������ ����: " << length << endl;
        cout << "������ �ʺ�: " << width << endl;
        cout << "������ ����: " << height << endl;
        cout << "������ ����: " << Volume() << endl;
    }
    Box operator+(const Box& b2);
};

Box Box::operator+(const Box& b2){
    Box b;
    b.length = this->length + b2.length;
    b.width = this->width + b2.width;
    b.height = this->height + b2.height;
    return b;
}

int main(){
    Box box1(10, 10, 10);
    Box box2(20, 20, 20);
    Box box3 = box1 + box2;
    box1.print();
    cout << endl;
    box2.print();
    cout << endl;
    box3.print();
}