//행렬덧셈
#include <iostream>
using namespace std;

int t;

int main() {
    freopen("input.txt", "r", stdin);
    cin >> t;
    while(t--) {
        int m, n;
        cin >> m >> n;
        int k = m*n;
        int a[2*k];
        for (int i=0; i<2*k; i++) {
            cin >> a[i];
        }
        for (int i=0; i<k; i++) {
            if (i != 0 && i % n == 0) {
                cout << endl;
            }
            cout << a[i] + a[i+k] << " ";
        }
        cout << endl;
    }
}