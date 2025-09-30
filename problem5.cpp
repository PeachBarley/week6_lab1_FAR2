#include <iostream>
using namespace std;
int swap(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "before swaping: a = " << a << " b= " << b << endl;
    swap(a, b);
    cout << "after swaping: a = " << a << " b= " << b << endl;
    return 0;
}