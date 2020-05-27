//수직/수평 선분의 교차
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int chx1, chx2, chy1, chy2, lx, ly, cnt = 0;
        int a[8];
        for (int i = 0; i < 8; i++) {
            cin >> a[i];
        }
        if (a[0] == a[2]) {
            lx = a[0];
            ly = a[5];
            if (a[4] > a[6]) {
                chx1 = a[6];
                chx2 = a[4];
            } else {
                chx1 = a[4];
                chx2 = a[6];
            }
            if (a[1] > a[3]) {
                chy1 = a[3];
                chy2 = a[1];
            } else {
                chy1 = a[1];
                chy2 = a[3];
            }
        } else if (a[1] == a[3]) {
            lx = a[4];
            ly = a[1];
            if (a[0] > a[2]) {
                chx1 = a[2];
                chx2 = a[0];
            } else {
                chx1 = a[0];
                chx2 = a[2];
            }
            if (a[5] > a[7]) {
                chy1 = a[7];
                chy2 = a[5];
            } else {
                chy1 = a[5];
                chy2 = a[7];
            }
        }
        if ((chx1 <= lx && lx <= chx2) && (chy1 <= ly && ly <= chy2)) {
            cnt++;
            if (chx1 == lx || lx == chx2 || chy1 == ly || ly == chy2) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
/* 
4
3 7 3 3
2 5 10 5
10 6 10 4
2 5 10 5
12 7 12 4
6 4 12 4
3 3 3 7
12 4 6 4 

1
2
2
0
*/