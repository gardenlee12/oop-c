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
        cout << "�簢�� ���� - ����: " << width << ", ����: " << height << endl;
        cout << "����: " << getArea() << ", �ѷ�: " << getPerimeter() << endl;
    }
};

int main() {
    Rect* p = new Rect(5, 8);

    p->print();

    cout << "����: " << p->getWidth() << ", ����: " << p->getHeight() << endl;

    // �����ڸ� ���� ���ο� ���� ���� ����
    p->setWidth(10);
    p->setHeight(15);

    p->print();

    delete p;

    return 0;
}
