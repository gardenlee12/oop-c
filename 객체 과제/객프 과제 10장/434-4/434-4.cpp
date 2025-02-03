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
    friend void print(Box box);
};

void print(Box box){
    cout << "상자의 길이 : " << box.length << endl;
    cout << "상자의 너비 : " << box.width << endl;
    cout << "상자의 높이 : " << box.height << endl;
    cout << "상자의 부피 : " << box.Volume() << endl;
}

int main(){
    Box box1(10, 10, 10);
    Box box2(20, 20, 20);
    print(box1);
    cout << endl;
    print(box2);
}