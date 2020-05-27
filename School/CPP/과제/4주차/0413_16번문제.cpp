//소수
#include <iostream>
#include <math.h>
using namespace std;

int t;

int main() {
    freopen("input.txt", "r", stdin);
    cin >> t;
    while (t--) {
        int n, i = 2;
        cin >> n;
        while (1) {
            if (i <= sqrt(n)) {
                if (n % i == 0) {
                    cout << 0 << endl;
                    break;
                } else {
                    i++;
                }
            } else {
                cout << 1 << endl;
                break;
            }
        }
    }
}