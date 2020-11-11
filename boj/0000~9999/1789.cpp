//수들의 합
#include <iostream>
using namespace std;

int main() {
  long long a;
  cin >> a;
  int i = 1;
  long long cnt = 0;
  while (cnt < a) {
    i++;
    cnt = cnt + i;
  }
  cout << i - 1 << endl;
}