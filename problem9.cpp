#include <iostream>
using namespace std;

double sum(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double product(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b == 0) {
        cout << "Error! Division by zero." << endl;
        return 0; // or handle error as you like
    }
    return a / b;
}

int main() {
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Sum: " << sum(num1, num2) << endl;
    cout << "Subtract: " << subtract(num1, num2) << endl;
    cout << "Product: " << product(num1, num2) << endl;
    cout << "Division: " << division(num1, num2) << endl;

    return 0;
}
