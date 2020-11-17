//0 = not cute / 1 = cute
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int zcnt = 0;
  int ocnt = 0;
  while (n--) {
    int a;
    cin >> a;
    if (a == 0) {
      zcnt++;
    } else if (a == 1) {
      ocnt++;
    }
  }
  if (zcnt > ocnt) {
    cout << "Junhee is not cute!" << endl;
  } else {
    cout << "Junhee is cute!" << endl;
  }
}