#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    double r;
    double i;

public:
    Complex() {}
    Complex(double _r, double _i) {
        r = _r;
        i = _i;
    }

    Complex(int _r) : r(static_cast<double>(_r)), i(0.0) {};
    double getReal() const {
        return r;
    }

    double getImaginary() const {
        return i;
    }

    void setReal(double real) {
        r = real;
    }

    void setImaginary(double imag) {
        i = imag;
    }

    void print() {
        if (i >= 0) {
            cout << r << " + " << i << "i" << endl;
        }
        else {
            cout << r << " - " << -i << "i" << endl;
        }
    }

    Complex operator+= (Complex& other) {
        r += other.r;
        i += other.i;
        return *this;
    }
    Complex operator-= (Complex& other) {
        r -= other.r;
        i -= other.i;
        return *this;
    }

    operator double() const {
        return sqrt(r * r + i * i);
    }

    friend Complex operator+ (const Complex& a, const Complex& b);
    friend Complex operator- (const Complex& a, const Complex& b);
    friend ostream& operator<< (ostream & os, const Complex & c);
    friend istream& operator>> (istream& ss, Complex& c);

    bool operator== (const Complex& other) const {
        return (r == other.r) && (i == other.i);
    }

    bool operator!= (const Complex& other) const {
        return !(*this == other);
    }
};

Complex operator+ (Complex& a, Complex& b) {
    double realpart = a.getReal() + b.getReal();
    double imagpart = a.getImaginary() + b.getImaginary();
    return Complex(realpart, imagpart);
}

Complex operator- (Complex& a, Complex& b) {
    double realpart = a.getReal() - b.getReal();
    double imagpart = a.getImaginary() - b.getImaginary();
    return Complex(realpart, imagpart);
}

ostream& operator<< (ostream& os, const Complex& c) {
    os << c.getReal() << " + " << c.getImaginary() << "i";
    return os;
}

istream& operator>> (istream& is, Complex& c) {
    cout << "실수부 입력: ";
    is >> c.r;
    cout << "허수부 입력: ";
    is >> c.i;
    return is;
}

Complex add(Complex& a, Complex& b) {
    double realPart = a.getReal() + b.getReal();
    double imagPart = a.getImaginary() + b.getImaginary();
    return Complex(realPart, imagPart);
}

int main() {
    Complex num1(1.0, 7.0);
    Complex num2(3.0, 8.0);

    Complex sum = num1 + num2;

    cout << "복소수 1: ";
    num1.print();

    cout << "복소수 2: ";
    num2.print();

    cout << "두 복소수의 합: ";
    sum.print();

    num1 += num2;
    std::cout << "두 복소수의 합 (+= 연산자): ";
    num1.print();

    num1 -= num2;
    std::cout << "두 복소수의 차 (-= 연산자): ";
    num1.print();

    Complex a = 6;
    
    std::cout << "a: "<<static_cast<double>(a)<<endl;
    a.print();

    Complex b;
    cin >> b;
    cout << "입력된 복소수: " << b << endl;

    if (a == b) {
        cout << "a와 b는 같은 복소수입니다." << endl;
    }
    else {
        cout << "a와 b는 다른 복소수입니다." << endl;
    }

    if (a != b) {
        cout << "a와 b는 다른 복소수입니다." << endl;
    }
    else {
        cout << "a와 b는 같은 복소수입니다." << endl;
    }
    system("pause");
}