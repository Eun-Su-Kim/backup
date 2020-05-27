//두 정수 사이의 모든 정수의 합 구하기
#include <iostream>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    for (int i = 0; i < testcase; i++) {
        int a,b;
        cin >> a >> b;
        int cnt = a;
        int sum = 0;
        while (cnt <= b) {
            sum += cnt;
            cnt++;
        }
        cout << sum << endl;
    }
}