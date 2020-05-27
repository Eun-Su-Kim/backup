//행렬곱셈
#include <iostream>
using namespace std;

int t;

int main() {
    freopen("input.txt", "r", stdin);
    cin >> t;
    while(t--) {
        int r, s, t;
        cin >> r >> s >> t;
        int a[r][s], b[s][t], ans[r][t];
        for (int i=0; i<r; i++) {
            for (int j=0; j<s; j++) {
                cin >> a[i][j];
            }
        }
        for (int i=0; i<s; i++) {
            for (int j=0; j<t; j++) {
                cin >> b[i][j];
            }
        }
        for (int i=0; i<r; i++) {
            for (int j=0; j<t; j++) {
                ans[i][j] = 0;
            }
        }
        for (int i=0; i<r; i++) {
            for (int j=0; j<t; j++) {
                for (int k=0; k<s; k++) {
                    ans[i][j] += (a[i][k]) * (b[k][j]);
                }
            }
        }       
        for (int i=0; i<r; i++) {
            for (int j=0; j<t; j++) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }

    }
}

/*
20 -1
58 20
41 22
1 2 3
4 5 6
7 8 9
*/