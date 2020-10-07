//ÃÖ´ñ°ª
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;
  
  for (int i = 0; i < 9; i++) {
    int a;
    cin >> a;
    v.push_back(a);
  }

  int b = 0;
  int idx = 0;
  
  for (int i = 0; i < 9; i++) {
    if (v[i] > b) {
      b = v[i];
      idx = i;
    }
  }

  cout << b << endl;
  cout << idx + 1 << endl;
}