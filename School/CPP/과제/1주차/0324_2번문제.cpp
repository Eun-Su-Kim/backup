//주어진 정수의 최대 최소 구하기
#include <iostream>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    for (int i = 0; i < testcase; i++) {
        int n;
        int j = 0;
        cin >> n;
        int a[n];
        while (j < n) {
            cin >> a[j];
            j++;    
        }
        int mxN = -999999;
        int miN = 999999;
        for (int k =0; k < n; k++) {
            if (mxN < a[k]) {
                mxN = a[k];
            }
            if (miN > a[k]) {
                miN = a[k];
            }
        }
        cout << mxN << " " << miN << endl;
    }
}