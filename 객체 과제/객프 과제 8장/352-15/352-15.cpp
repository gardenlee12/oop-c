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

// �� ���� Rect ��ü�� �޾Ƽ� ���� ũ�������� üũ�ϴ� �Լ�
bool is_equal(Rect r1, Rect r2) {
    return (r1.getWidth() == r2.getWidth() && r1.getHeight() == r2.getHeight());
}

int main() {
    Rect rect1(5, 8);
    Rect rect2(5, 8);

    // �� ��ü�� ũ�Ⱑ ������ üũ�ϰ� ��� ���
    if (is_equal(rect1, rect2)) {
        cout << "�� ��ü�� ũ��� �����ϴ�." << endl;
    }
    else {
        cout << "�� ��ü�� ũ��� �ٸ��ϴ�." << endl;
    }

    return 0;
}
