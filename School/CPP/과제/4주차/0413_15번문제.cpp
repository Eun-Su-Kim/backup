//패리티비트
#include <iostream>
using namespace std;

int t;

int main() {
    freopen("input.txt", "r", stdin);
    cin >> t;
    while (t--) {
        int n, ans, cnt = 0;
        string bin = "";
        cin >> n;
        ans = n;
        while(n>=1){
            if (n%2 == 1) {
                bin += "1";
                cnt++;
            } else {
                bin += "0";
            }
            n = n/2;
        }
        if (cnt % 2 == 0) {
            cout << ans << endl; 
        } else {
            cout << ans + 2147483648 << endl;
        }
    }
}