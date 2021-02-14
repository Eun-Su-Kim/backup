//사과
#include <iostream>
using namespace std;

int main() {
  int n, cnt;
  cnt = 0;
  cin >> n;
  while (n--) {
    int a, b;
    cin >> a >> b;
    cnt += b % a;
  }
  cout << cnt << '\n';
}