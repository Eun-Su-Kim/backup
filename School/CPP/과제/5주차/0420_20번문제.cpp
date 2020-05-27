//집합연산
#include <iostream>
using namespace std;

int t;

int main() {
    freopen("input.txt", "r", stdin);
    cin >> t;
    while(t--){
        int m1, m2;
        cin >> m1;
        unsigned int a[5], b[5], ans1[5], ans2[5], ans3[5];
        for (int i=0; i<5; i++) {
            a[i] = 0;
            b[i] = 0;
            ans1[i] = 0;
            ans2[i] = 0;
            ans3[i] = 0;
        }
        for (int i=0; i<m1; i++) {
            int n;
            cin >> n;
            if (n < 32) {
                a[0] |= 1<<n;
            } else if (32 <= n && n < 64) {
                a[1] |= 1<<(n-32);
            } else if (64 <= n && n < 96) {
                a[2] |= 1<<(n-64);
            } else if (96 <= n && n < 128) {
                a[3] |= 1<<(n-96);
            } else if (128 <= n && n < 160) {
                a[4] |= 1<<(n-128);
            }
        }
        cin >> m2;
        for (int i=0; i<m2; i++) {
            int n;
            cin >> n;
            if (n < 32) {
                b[0] |= 1<<n;
            } else if (32 <= n && n < 64) {
                b[1] |= 1<<(n-32);
            } else if (64 <= n && n < 96) {
                b[2] |= 1<<(n-64);
            } else if (96 <= n && n < 128) {
                b[3] |= 1<<(n-96);
            } else if (128 <= n && n < 160) {
                b[4] |= 1<<(n-128);
            }
        }
        for (int i=0; i<5; i++) {
            for (int j=0; j<32; j++) {
                if ((a[i]&(1<<j)) == (b[i]&(1<<j))) {
                    if ((a[i]&(1<<j))!=0) {
                        ans1[i] |= (1<<j);
                    }
                }
                if ((a[i]&(1<<j)) > 0 || (b[i]&(1<<j)) > 0) {
                    ans2[i] |= 1<<j;
                }
                if ((a[i]&(1<<j)) != (b[i]&(1<<j))) {
                    if ((a[i]&(1<<j)) != 0) {
                        ans3[i] |= 1<<j;
                    }
                }
            }
        }
        int cnt1=0, cnt2=0, cnt3=0;
        for (int i=0; i<5; i++) {
            for (int j=0; j<32; j++) {
                if ((ans1[i]&(1<<j))) {
                    cnt1++;
                }
                if ((ans2[i]&(1<<j))) {
                    cnt2++;
                }
                if ((ans3[i]&(1<<j))) {
                    cnt3++;
                }
            }
        }
        cout << cnt1 << " ";
        for (int i=0; i<5; i++) {
            for (int j=0; j<32; j++) {
                if ((ans1[i]&(1<<j))) {
                    cout << j +(i*32) << " ";
                }
            }
        }
        cout << endl;
        cout << cnt2 << " ";
        for (int i=0; i<5; i++) {
            for (int j=0; j<32; j++) {
                if ((ans2[i]&(1<<j))) {
                    cout << j +(i*32) << " ";
                }
            }
        }
        cout << endl;
        cout << cnt3 << " ";
        for (int i=0; i<5; i++) {
            for (int j=0; j<32; j++) {
                if ((ans3[i]&(1<<j))) {
                    cout << j +(i*32) << " ";
                }
            }
        }
        cout << endl;
    }
}