//
// Created by 赵鑫杰 on 2022/7/2.
//
#include <iostream>
using namespace std;

class Complex
{
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    friend Complex operator+(const Complex &c1, const Complex &c2); // 运算符 + 重载
    friend Complex operator-(const Complex &c1, const Complex &c2);
    friend ostream &operator<<(ostream &out, const Complex &c); // 运算符 << 重载

private:
    double real;
    double imag;
};

Complex operator+(const Complex &c1, const Complex &c2)
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

Complex operator-(const Complex &c1, const Complex &c2)
{
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

ostream &operator<<(ostream &out, const Complex &c)
{
    out << "(" << c.real << ", " << c.imag << ")";
    return out;
}

int main()
{
    Complex c1(5, 4), c2(2, 10), c3;
    cout << "c1=" << c1 << endl;
    cout << "c2=" << c2 << endl;
    c3 = c1 - c2;
    cout << "c3=c1-c2=" << c3 << endl;
    c3 = c1 + c2;
    cout << "c3=c1+c2=" << c3 << endl;

    return 0;
}
