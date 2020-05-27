//직선 그래프 출력하기
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int k;
        cin >> k;
        for (int y = 0; y < k; y++) {
            for (int x = 0; x < k; x++) {
                if (x == (k/2) && y == (k/2)) {
                    cout << "O";
                } else if (x + y == k-1) {
                    cout << "*";
                } else if (x == (k/2)) {
                    cout << "I";
                } else if (y == (k/2)) {
                    cout << "+";
                } else {
                    cout << ".";
                }
                if (x == k-1) {
                    cout << endl;
                }
            }
        }
    }
}