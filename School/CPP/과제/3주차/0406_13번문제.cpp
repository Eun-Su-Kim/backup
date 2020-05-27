//삼각형 면적
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double ax, ay, bx, by, cx, cy, s, r;
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        s = (bx - ax)*(cy - ay)-(cx - ax)*(by - ay);
        if (s > 0) {
            cout << s << " " << 1 << endl;
        } else if (s < 0) {
            cout << s*(-1) << " " << -1 << endl;
        } else {
            cout << s << " " << 0 << endl;
        }

    }
}