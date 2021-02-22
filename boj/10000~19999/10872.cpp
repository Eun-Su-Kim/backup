//팩토리얼
#include <iostream>
using namespace std;

int main() {
  int n;
  long long p;
  p = 1;
  cin >> n;
  for (int i = n; i > 0; i--) {
    p *= i;
  }
  cout << p << '\n';
}