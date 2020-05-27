#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int A, B, C, N, S;
        cin >> A >> B >> C >> N;
        S = A + B + C + N;
        if (S % 3 == 0) {
            if ((S / 3) >= A && (S / 3) >= B && (S / 3) >= C) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << "NO" << endl;
        }
    }
}