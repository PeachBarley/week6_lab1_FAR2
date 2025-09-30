#include <iostream>
using namespace std;
int Factorial(int n = 1) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}
int main() {
    int factorial;
    cout << "Enter the number: ";
    cin >> factorial;
    cout << "factorial is: " << Factorial(factorial) << endl;
    cout << "without parameter" << Factorial() << endl;
    return 0;
}