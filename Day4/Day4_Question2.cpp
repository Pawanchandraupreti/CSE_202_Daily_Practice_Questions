#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:

    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

   
    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator - (const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {

    Complex c1(3, 4), c2(1, 2);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout << "Complex Number 1: ";
    c1.display();
    cout << "Complex Number 2: ";
    c2.display();
    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();

    return 0;
}