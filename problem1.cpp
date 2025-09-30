#include <iostream>
using namespace std;
int product(int a, int b) {
    return a * b;
}
int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "the product = " << product(a, b) << endl;
    return 0;
}