//국제표준도서번호
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        char a[256];
        int bar = 0, errcnt = 0, chsum = 0;
        cin >> a;
        vector<char> v;
        vector<char> chsumv;
        for (int i = 0; i<strlen(a); i++) {
            if (strlen(a) == 13 && a[strlen(a)-1] != '-') {
                if (('0' <= a[i] && a[i] <= '9') || (a[i] == '-')) {
                    if (a[i] == '-') {
                        if (bar == 0 && (v.size() > 5 || v.size() == 0)) {
                            errcnt++;
                            break;
                        } else if (bar == 1 && (v.size() > 7 || v.size() == 0)) {
                            errcnt++;
                            break;
                        } else if (bar == 2 && (v.size() > 6 || v.size() == 0)) {
                            errcnt++;
                            break;
                        }
                        bar++;
                        v.clear();
                    } else {
                        v.push_back(a[i]);
                        chsumv.push_back(a[i]);
                    }
                } else if (bar == 3 && a[i] == 'X'){
                    v.push_back(a[i]);
                    chsumv.push_back(a[i]);
                } else {
                    errcnt++;
                }
            } else {
                errcnt++;
                break;
            }
        }
        if (bar != 3 || v.size() != 1) errcnt++;
        if (errcnt == 0) {
            for (int i = 0; i < chsumv.size(); i++) {
                if ((10 - i) <= 1) break;
                chsum += (chsumv[i] - 48) * (10 - i);  
            }
            if ((11 - (chsum % 11)) == (chsumv.back() - 48) || ((11 - (chsum % 11)) == 10 && chsumv.back() == 'X') ||
            (((11 - (chsum % 11)) == 11) && chsumv.back() == '0')) {
            } else {
                errcnt++;
            }
        }
        if (errcnt == 0) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}