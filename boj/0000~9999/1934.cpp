//최소공배수
#include <iostream>
using namespace std;

int gcd(int x, int y) {
  int tmp;
  while (y) {
    tmp = y;
    y = x % y;
    x = tmp;
  }
  return x;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, tmp;
    cin >> a >> b;
    if (a >= b) {
      cout << (a / gcd(a, b)) * (b / gcd(a, b)) * gcd(a, b) << endl;
    } else {
      tmp = b;
      b = a;
      a = tmp;
      cout << (a / gcd(a, b)) * (b / gcd(a, b)) * gcd(a, b) << endl;
    }
  }
}