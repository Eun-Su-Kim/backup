//알람 시계
#include <iostream>
using namespace std;

int main() {
  int h, m;
  cin >> h >> m;
  if (m - 45 < 0) {
    if (h - 1 < 0) {
      cout << 23 << " " << 60 + (m - 45) << endl;
    } else {
      cout << h - 1 << " " << 60 + (m - 45) << endl;
    }
  } else {
    cout << h << " " << m - 45 << endl;
  }
}