#include <iostream>
using namespace std;
float num(float a, float b, float c) {
    if (a>b && a>c) {
        cout << "maximum is: " << a << endl;
    }else if (b>a && b>c) {
        cout << "maximum is: " << b << endl;
    }else if (c>a && c>b) {
        cout << "maximum is: " << c << endl;
    }
}
float num1(float a, float b, float c) {
    if (a<b && b<c) {
        cout << "minimum is: " << a << endl;
    }else if (b<a && b<c) {
        cout << "minimum is: " << b << endl;
    }else if (c<a && c<b) {
        cout << "minimum is: " << c << endl;
    }
}

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    num(a, b, c);

    int a1, b1, c1;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    num1(a, b, c);
    return 0;
}