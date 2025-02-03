#include <iostream>
#include <string>
using namespace std;

class Rect {
private:
    int width;
    int height;

public:
    Rect(int w, int h) : width(w), height(h) {}

    int getWidth() const {
        return width;
    }

    int getHeight() const {
        return height;
    }

    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

    int getArea() const {
        return width * height;
    }

    int getPerimeter() const {
        return 2 * (width + height);
    }

    void print() const {
        cout << "사각형 정보 - 가로: " << width << ", 세로: " << height << endl;
        cout << "면적: " << getArea() << ", 둘레: " << getPerimeter() << endl;
    }
};

int main() {
    Rect* p = new Rect(5, 8);

    p->print();

    cout << "가로: " << p->getWidth() << ", 세로: " << p->getHeight() << endl;

    // 설정자를 통해 가로와 세로 정보 변경
    p->setWidth(10);
    p->setHeight(15);

    p->print();

    delete p;

    return 0;
}
