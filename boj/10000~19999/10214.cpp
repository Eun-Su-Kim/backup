//Baseball
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, y, k;
    y = 0;
    k = 0;
    for (int i = 0; i < 9; i++) {
      cin >> a >> b;
      y += a;
      k += b;
    }
    if (y > k) {
      cout << "Yonsei" << endl;
    } else if (y < k) {
      cout << "Korea" << endl;
    } else {
      cout << "Draw" << endl;
    }
  }
}