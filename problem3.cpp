#include <iostream>
#include <cmath>
using namespace std;
void fun(float r, float pi = 3.14) {
    cout << "circumference = " << 2 * pi * r << endl;
    cout << "area of circle = " << pi * pow(r, 3) << endl;
}
int main() {
    float r, pi = 3.14;
    cout << "eneter the radius of the circle: ";
    cin >> r;
    fun(r, pi);
    return 0;
}