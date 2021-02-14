//별 찍기 - 7
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = n - i - 1; j > 0; j--) {
      cout << " ";
    }
    for (int k = 0; k < 2 * (i + 1) - 1; k++) {
      cout << "*";
    }
    cout << "\n";
  }
  for (int i = 1; i < n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << " ";
    }
    for (int k = 0; k < 2 * (n - i) - 1; k++) {
      cout << "*";
    }
    cout << '\n';
  }
}