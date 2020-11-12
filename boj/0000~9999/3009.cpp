//네 번째 점
#include <iostream>
using namespace std;

int main() {
  int a1, b1, a2, b2, a3, b3;
  int sa, sb;
  cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
  if (a1 == a2) {
    sa = a3;
  } else if (a1 == a3) {
    sa = a2;
  } else if (a2 == a3) {
    sa = a1;
  }
  if (b1 == b2) {
    sb = b3;
  } else if (b1 == b3) {
    sb = b2;
  } else if (b2 == b3) {
    sb = b1;
  }
  cout << sa << " " << sb << endl;
}