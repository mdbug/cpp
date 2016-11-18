#include <iostream>

class Complex
{
public:
    Complex (double real) : real(real), img(0) {}
    Complex (double real, double img) : real(real), img(img) {}
    virtual ~Complex () {}

    Complex& operator += (const Complex& c) {
        real += c.real;
        img += c.img;
        return *this;
    }

    friend Complex operator + (const Complex& lhs, const Complex& rhs) {
        Complex tmp(lhs);
        tmp += rhs;
        return tmp;
    }

    friend std::ostream& operator << (std::ostream& lhs, const Complex& rhs) {
        return lhs << rhs.real << " + " << rhs.img << "i";
    }

private:
    double real;
    double img;
};

int main() {
    Complex c1(12, 34);
    Complex c2(7, 9);
    Complex c3 = c1 + c2;
    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;
    std::cout << c3 << std::endl;
}
