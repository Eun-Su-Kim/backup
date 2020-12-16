//완전제곱수
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int m, n, sum;
  sum = 0;
  vector<int> iv;
  cin >> m >> n;
  for (int i = 1; i <= 100; i++) {
    if (i * i >= m && i * i <= n) {
      iv.push_back(i * i);
    }
  }
  if (iv.size() > 0) {
    for (int i = 0; i < iv.size(); i++) {
      sum += iv[i];
    }
    cout << sum << endl;
    cout << iv[0] << endl;
  } else {
    cout << -1 << endl;
  }
}