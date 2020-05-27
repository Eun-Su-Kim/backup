#include <iostream>
using namespace std;

int main() {
    int N, M, C;
    cin >> N >> M >> C;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        if (C == a) {
            C = b;
        } else if (C == b) {
            C = a;
        }
    }
    cout << C <<endl;
}