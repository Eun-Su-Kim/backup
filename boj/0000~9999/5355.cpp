//화성 수학
#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    string ch;
    double a;
    cin >> a;
    getline(cin, ch);
    for (int i = 0; i < ch.size(); i++) {
      switch(ch[i]) {
        case '@':
          a *= 3;
          break;
        case '%':
          a += 5;
          break;
        case '#':
          a -= 7;
          break;
      }
    }
    cout << fixed;
    cout.precision(2);
    cout << a << endl;
  }
}