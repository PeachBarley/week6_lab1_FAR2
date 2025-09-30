#include <iostream>
#include <cmath>
using namespace std;
void fun(float r, float pi = 3.14) {
    cout << "circumference = " << 2 * pi * r << endl;
    cout << "area of circle = " << pi * pow(r, 3) << endl;
}

void notfun(float a, float b) {
    cout << "area = " << a * b << endl;
    cout << "perimeter = " << 2 * (a + b) << endl;
}

int main() {
    float radius, pi = 3.14;
    cout << "eneter the radius of the circle: ";
    cin >> radius;
    fun(radius, pi);

    float height, width;
    cout << "enter the height and width of the rectangle: ";
    cin >> height >> width;
    notfun(height, width);
    return 0;
}