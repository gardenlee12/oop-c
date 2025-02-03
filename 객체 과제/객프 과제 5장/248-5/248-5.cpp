#include <iostream>
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

    
};
Complex add(Complex& a, Complex& b) {
    double realPart = a.getReal() + b.getReal();
    double imagPart = a.getImaginary() + b.getImaginary();
    return Complex(realPart, imagPart);
}

int main() {
    Complex num1(5, 3);
    Complex num2(-3, -4);

    cout << "Number 1: ";
    num1.print();

    cout << "Number 2: ";
    num2.print();

    Complex sum = add(num1, num2);
    cout << "Sum: ";
    sum.print();
    system("pause");
}