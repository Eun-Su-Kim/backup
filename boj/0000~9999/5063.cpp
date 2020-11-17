//TGN
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int r, e, c;
    cin >> r >> e >> c;
    int ad = e - c;
    if (r == ad) {
      cout << "does not matter" << endl;
    } else if (r < ad) {
      cout << "advertise" << endl;
    } else if (r > ad) {
      cout << "do not advertise" << endl;
    }
  }
}