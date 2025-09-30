#include <iostream>
using namespace std;
float parameters(float v1, float v2, float t) {
    return (v2-v1)/t;
}
int main() {
    float v1, v2, t;
    cout << "Enter v1, v2, and t: ";
    cin >> v1 >> v2 >> t;
    cout << "acceleration of the given values is: " << parameters(v1, v2, t) << endl;
    return 0;
}