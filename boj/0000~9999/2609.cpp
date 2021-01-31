//최대공약수와 최소공배수
#include <iostream>
using namespace std;

int gcd(int x, int y) {
  int tmp, a, b;
  a = x;
  b = y;
  while(a % b) {
    tmp = a;
    a = b;
    b = tmp % b;
  }
  return b;
}

int main() {
  int a, b, tmp;
  cin >> a >> b;
  tmp = gcd(a, b);
  cout << tmp << '\n';
  cout << (a / tmp) * (b / tmp) * tmp << '\n';
}