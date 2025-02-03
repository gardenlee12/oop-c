#include <iostream>
#include <cmath>

using namespace std;

class Shape {
    int x, y;
    string color;

public:
    Shape(int x, int y, string c) : x(x), y(y), color(c) {}

    void setx(int& x) {
        this->x = x;
    }

    void sety(int& y) {
        this->y = y;
    }

    void setcolor(string& color) {
        this->color = color;
    }

    int getx() {
        return x;
    }

    int gety() {
        return y;
    }

    string getcolor() {
        return color;
    }

    virtual double getArea() {
        return 0.0;
    }
};

class Circle : public Shape {
    double radius;

public:
    Circle(int x, int y, string c, double r) : Shape(x, y, c), radius(r) {}

    void setRadius(double& r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }

    double getArea() {
        return 3.14159 * radius * radius; // π * r^2
    }
};

class Rect : public Shape {
    int width, height;
public:
    Rect(int x, int y, string c, int w, int h) : Shape(x,y,c),width(w),height(h){}
    double getArea() {
        return width * height;
    }
};

class Triangle : public Shape {
    int width, height;
public:
    Triangle(int x, int y, string c, int w, int h) : Shape(x, y, c), width(w), height(h) {}
    double getArea() {
        return width * height/2;
    }
};

int main() {
    Shape* s1 = new Circle(3, 3, "red", 5);
    Shape* s2 = new Rect(5, 5, "blue", 4, 5);
    Shape* s3 = new Triangle(8, 8, "green", 6, 4);

    cout << "도형 #1의 면적: " << s1->getArea() << endl;
    cout << "도형 #2의 면적: " << s2->getArea() << endl;
    cout << "도형 #3의 면적: " << s3->getArea() << endl;
    return 0;
}
