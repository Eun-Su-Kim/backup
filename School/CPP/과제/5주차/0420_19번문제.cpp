//해밍수
#include <iostream>
#include <algorithm>
using namespace std;

int t;

int main() {
    freopen("input.txt", "r", stdin);
    int cnt=0;
    long long a[7410];
    long long A = 1, MX = 398580750;
    for (int i=0; i<30; i++) {
        long long B = 1;
        for (int j=0; j<19; j++){
            long long C = 1;
            for (int k=0; k<13; k++) {
                if (C > MX) {
                    continue;
                }
                if (A*B > MX || B*C > MX || A*C > MX || A*B*C > MX) {
                    continue;
                }
                a[cnt++] = A*B*C;
                C *=5;
            }
            B*=3;
            if (B > MX) {
                continue;
            }
        }
        A*=2;
        if (A > MX) {
            continue;
        }
    }
    sort(a,a+cnt);
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << a[n-1] << endl;
    }
}