//약수들의 합
#include <iostream>
#include <vector>
using namespace std;

int main() {
  while (1) {
    int n;
    int sc = 0;
    vector<int> iv;
    cin >> n;
    if (n == -1) break;
    for (int i = 1; i <= n / 2; i++) {
      if (n % i == 0) {
        iv.push_back(i);
      }
    }
    for (int i = 0; i < iv.size(); i++) {
      sc += iv[i];
    }
    if (n == sc) {
      cout << n << " = ";
      for (int i = 0; i < iv.size(); i++) {
        if (i == iv.size() - 1) {
          cout << iv[i];
        } else {
          cout << iv[i] << " + ";
        }
      }
      cout << endl;
    } else {
      cout << n << " is NOT perfect." << endl;
    }
  }
}