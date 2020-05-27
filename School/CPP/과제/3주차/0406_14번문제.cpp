//사각형과 점과의 거리
#include <iostream>
#include <algorithm>
using namespace std;

int abs(int a) {
    return a>0?a:-a;
}

int pow(int a) {
    return a*a;
}

int d1(int x1, int y1, int x2, int y2) {
    int ans = 0;
    ans = abs(x1-x2) + abs(y1-y2);
    return ans; 
}

int d2(int x1, int y1, int x2, int y2) {
    int ans = 0;
    ans = pow(x1-x2) + pow(y1-y2);
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int x1, y1, x2, y2, a, b;
        int x[4], y[4];
        cin >> x1 >> y1 >> x2 >> y2 >> a >> b;
        x[0] = x1;
        y[0] = y1;
        x[1] = x2;
        y[1] = y2;
        x[2] = x1;
        y[2] = y2;
        x[3] = x2;
        y[3] = y1;
        if ((x1 <= a && a <= x2) && (y1 <= b && b <= y2)) {
            cout << "0 0" << endl;
        } else if (x1 <= a && a <= x2) {
            int i = 0, j = 0;
            i = abs(b-y1);
            j = abs(b-y2);
            if (i < j) {
                cout << pow(i) << " " << i << endl;
            } else {
                cout << pow(j) << " " << j << endl;
            }
        } else if (y1 <= b && b <= y2) {
            int i = 0, j = 0;
            i = abs(a-x1);
            j = abs(a-x2);
            if (i < j) {
                cout << pow(i) << " " << i << endl;
            } else {
                cout << pow(j) << " " << j << endl;
            }
        } else if ((a < x1 || a > x2) && (b < y1 || b > y2)) {
            int aa[4], bb[4];
            for (int i = 0; i < 4; i++) {
                aa[i] = d2(a, b, x[i], y[i]);
                bb[i] = d1(a, b, x[i], y[i]);
            }
            sort(aa,aa+4);
            sort(bb,bb+4);
            cout << aa[0] << " " << bb[0] << endl;
        }
    
    }

}