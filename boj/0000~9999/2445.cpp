//º° Âï±â - 8
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }
    for (int k = 2 * (n - 1) - (2 * i); k > 0; k--) {
      cout << " ";
    }
    for (int l = 0; l <= i; l++) {
      cout << "*";
    }
    cout << '\n';
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = n - (i + 1); j > 0; j--) {
      cout << "*";
    }
    for (int k = 0; k < 2 + (2 * i); k++) {
      cout << " ";
    }
    for (int l = n - (i + 1); l > 0; l--) {
      cout << "*";
    }
    cout << '\n';
  }
}