//평균 점수
#include <iostream>
using namespace std;

int main() {
  int cnt = 0;
  for (int i = 0; i < 5; i++) {
    int a;
    cin >> a;
    if (a < 40) {
      cnt += 40;
    } else {
      cnt += a;
    }
  }
  cout << cnt / 5 << endl;
}