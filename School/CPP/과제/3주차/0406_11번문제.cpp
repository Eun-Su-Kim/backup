//삼각형의 종류 (2)
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        double ax, ay, bx, by, cx, cy, ab, bc, ca, tmp;
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        ab = pow(ax - bx, 2) + pow(ay - by, 2);
        bc = pow(bx - cx, 2) + pow(by - cy, 2);
        ca = pow(cx - ax, 2) + pow(cy - ay, 2);
        if (ab < bc) {
            tmp = ab;
            ab = bc;
            bc = tmp;
        }
        if (ab < ca) {
            tmp = ab;
            ab = ca;
            ca = tmp;
        }
        if (ax == bx && bx == cx) {
            cout << 0 << endl;
        } else if (ay == by && by == cy) {
            cout << 0 << endl;
        } else if ((by - ay)*(cx - ax) == (cy - ay)*(bx - ax)) {
            cout << 0 << endl;
        } else {
            if (ab == (bc + ca)) {
                cout << 1 << endl;
            } else if (ab > (bc + ca)) {
                cout << 2 << endl;
            } else if (ab < (bc + ca)) {
                cout << 3 << endl;
            }
        }

    }

}