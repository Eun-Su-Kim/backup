//다각형의 면적
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum = 0;;
        cin >> n;
        int x[n+1], y[n+1];
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }
        x[n] = x[0];
        y[n] = y[0];
        for (int i = 0; i < n; i++) {
            sum += ((x[i])+(x[i+1]))*((y[i+1])-(y[i]));
        }
        if (sum < 0) {
            cout << sum * (-1) << " " << -1 << endl;
        } else {
            cout << sum << " " << 1 << endl;
        }
    }
}