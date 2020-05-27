//괄호 (2)
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int t;

int main() {
    freopen("input1.txt", "r", stdin);
    cin >> t;
    while(t--) {
        string a;
        int cnt = 0;
        stack<char> an;
        cin >> a;
        char r[a.size()], b;
        for (int i=0; i<a.size(); i++) {
            r[i] = a.at(i);
        }
        for (int i=0; i<a.size(); i++) {
            b = r[i];
            if (b == ')' || b == '}' || b == ']') {
                if (an.empty()) {
                    cnt++;
                    break;
                }
                if ((b == ')' && an.top() == '(') || (b == '}' && an.top() == '{') || (b == ']' && an.top() == '[')) {
                    an.pop();
                    continue;
                } else {
                    cnt++;
                    break;
                }
            }
            an.push(b);
        }
        if (cnt == 0 && an.empty()) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
        
    }
}

/*
1
1
1
0
0
0
*/