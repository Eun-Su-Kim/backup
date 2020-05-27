//모래시계출력하기
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        for (int i = 0; i < k/2+1; i++) {
            string a, b, c;
            int x = i;
            while (x--) {
                a += "-";
            }
            if (i % 2 == 0) {
                for (int j = 0; j < k-(a.length()*2); j++) {
                    if (j % 2 == 0) {
                        b +="*";
                    } else {
                        b += "+";
                    }
                }
            } else {
                for (int y = 0; y < k-(a.length()*2); y++) {
                    if (y % 2 == 0) {
                        b += "*";
                    } else {
                        b += "+";
                    }
                }
            }
            a += b;
            int rightm = k - a.length();
            while (rightm--) {
                c += "-";
            }
            a += c;
            cout << a;
            cout << endl;
        }
        for (int i = k/2+1; i < k; i++) {
            string a, b, c;
            int x = k - (i+1);
            while (x--) {
                a += "-";
            }
            c = a;
            int crightm = c.length();
            while (b.length() + (a.length()*2)< k) {
                if (b.length() % 2 == 0) {
                    b+="*";
                } else {
                    b+="+";
                }
            }
            a += b;
            while (crightm--) {
                a+="-";
            }
            cout << a;
            cout << endl;
        }
    }
}