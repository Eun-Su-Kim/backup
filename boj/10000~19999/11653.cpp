//소인수분해
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n <= 1) {
    int i = 2;
    while (1) {
      if (n % i == 0) {
        cout << i << endl;
        n /= i;
        break;
      } else {
        i++;
      }
    }
  }
}