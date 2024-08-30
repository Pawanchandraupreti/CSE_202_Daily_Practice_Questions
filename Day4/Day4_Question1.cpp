#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Addition: " << num1 + num2 << endl;

    cout << "Subtraction: " << num1 - num2 << endl;

    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Division: " << static_cast<double>(num1) / num2 << endl;
    } else {
        cout << "Division: Error! Division by zero." << endl;
    }

    if (num2 != 0) {
        cout << "Modulus: " << num1 % num2 << endl;
    } else {
        cout << "Modulus: Error! Division by zero." << endl;
    }

    return 0;
}