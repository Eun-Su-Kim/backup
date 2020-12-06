//주사위 게임
#include <iostream>
using namespace std;

int main() {
  int n;
  int a = 100;
  int b = 100;
  cin >> n;
  while (n--) {
    int x, y;
    cin >> x >> y;
    if (x > y) {
      b -= x;
    } else if (x < y) {
      a -= y;
    }
  }
  cout << a << endl;
  cout << b << endl;
}