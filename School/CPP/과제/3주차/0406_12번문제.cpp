//삼각형의 종류 (1)
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        double a, b, c;
        cin >> a >> b >> c;
        if (a + b > c) {
            if (a == b && b == c) {
                cout << 1 << endl;
            } else if (a == b || b == c) {
                cout << 3 << endl;
            } else if (pow(c,2) == pow(a,2) + pow(b,2)) {
                cout << 2 << endl;
            } else {
                cout << 4 << endl;
            }
        } else {
            cout << 0 << endl;
        }
    }
}