//µµ¹Ì³ë
#include <iostream>
using namespace std;

int main() {
  int n, sum;
  sum = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= i; j++) {
      sum += i + j;
    }
  }
  cout << sum << '\n';
}