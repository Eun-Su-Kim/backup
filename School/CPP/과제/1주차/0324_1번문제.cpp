//주어진 정수의 합 구하기
#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int b;
        int j = 0;
        int cnt = 0;
        cin >> b;
        while (j < b) {
            int k;
            cin >> k; 
            cnt += k;    
            j++;
        }
        cout << cnt << endl;
    }
}