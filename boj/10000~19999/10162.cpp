//전자레인지
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  int a, b, c;
  a = 0;
  b = 0;
  c = 0;
  if (t % 10 != 0) {
    cout << -1 << endl;
  } else {
    while (t - 300 >= 0) {
      t -= 300;
      a++;
    }
    while (t - 60 >= 0) {
      t -= 60;
      b++;
    }
    while (t - 10 >= 0) {
      t -= 10;
      c++;
    }
    cout << a << " " << b << " " << c << endl;
  }
}