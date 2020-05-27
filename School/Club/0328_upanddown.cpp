#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        int a[N];
        string b[N];
        int cnt = 0;
        for (int j = 0; j < N; j++) {
            cin >> a[j] >> b[j];
        }
        for (int k = 0; k < N; k++) {
            if (b[k] == "UP") {
                if (a[N-1] < a[k]) {
                    cnt++;
                }
            } else if (b[k] == "DOWN") {
                if (a[N-1] > a[k]) {
                    cnt++;
                }
            }
        }
        if (cnt == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}