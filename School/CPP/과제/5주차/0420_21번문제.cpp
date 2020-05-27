//이동 평균
#include <iostream>
using namespace std;

int t;

int main() {
    freopen("input.txt","r",stdin);
    cin >> t;
    while(t--){
        int n, k;
        cin >> n;
        int a[n], ans[256];
        for (int i=0; i<256; i++) {
            ans[i] = 0;
        }
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        cin >> k;
        for (int i=0; i<n; i++) {
            for (int j=0; j<k; j++) {
                if (i+j >= n) {
                    break;
                }
                ans[i] += a[i+j];
            }
        }
        cout << n-k+1 << " ";
        for (int i=0; i<n-k+1; i++) {
            cout << ans[i]/k << " ";
        }
        cout << endl;
    }
}