#include <iostream>
using namespace std;

int getTriangularNumber(int n) {
    return n * (n + 1) / 2;
}

int main() {
    const int total = 75;
    const int perLine = 5;

    for (int i = 1; i <= total; i++) {
        cout << getTriangularNumber(i) <<;
        if (i % perLine == 0) {
            cout << endl;
        }
    }

    return 0;
}
