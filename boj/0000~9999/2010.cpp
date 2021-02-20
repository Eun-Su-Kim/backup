//ÇÃ·¯±×
#include <iostream>
using namespace std;

int main() {
  int n, cnt;
  cnt = 0;
  cin >> n;
  while (n--) {
    int p;
    cin >> p;
    cnt += p - 1;
  }
  cnt++;
  cout << cnt << '\n';
}