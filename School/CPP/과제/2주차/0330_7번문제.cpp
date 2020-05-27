//숫자로 삼각형 출력하기
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        for (int i = 1; i < k+1; i++) {
            int x = i;
            for (int j = 0; j < i; j++) {
                x += k-j;
                cout << x - k << " ";
            }
            cout << endl;
        }
    }
}