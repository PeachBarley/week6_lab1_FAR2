#include <iostream>
using namespace std;
int gcd(int num1, int num2) {
    while (num2 != 0) {
        int temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    return num1;
}
int main() {
    int num1, num2;
    cout << "enter two numbers: ";
    cin >> num1 >> num2;
    cout << "gcd is:" << gcd(num1, num2) << endl;
    return 0;
}
