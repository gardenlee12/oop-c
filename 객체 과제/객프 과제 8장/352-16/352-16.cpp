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

bool is_equal(const Rect& r1, const Rect& r2) {
    return (r1.getWidth() == r2.getWidth() && r1.getHeight() == r2.getHeight());
}

int main() {
    Rect rect1(5, 8);
    Rect rect2(5, 8);

    if (is_equal(rect1, rect2)) {
        cout << "두 객체의 크기는 같습니다." << endl;
    }
    else {
        cout << "두 객체의 크기는 다릅니다." << endl;
    }

    return 0;
}
