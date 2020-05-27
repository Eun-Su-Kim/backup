//끝자리 숫자 계산하기
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i<n; i++) {
            int num;
            cin >> num;
            a[i] = num % 10;
        }
        for (int j = 1; j<n; j++) {
            a[j] = (a[j-1] * a[j])%10;
        }
        cout << a[n-1] << endl;
    }
}