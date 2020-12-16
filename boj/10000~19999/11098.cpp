//첼시를 도와줘!
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int p, sum, it;
    sum = 0;
    it = 0;
    vector<string> stv;
    vector<int> iv;
    cin >> p;
    while (p--) {
      int price;
      string name;
      cin >> price >> name;
      stv.push_back(name);
      iv.push_back(price);
    }
    for (int i = 0; i < iv.size(); i++) {
      if (iv[i] >= sum) {
        sum = iv[i];
        it = i;
      }
    }
    cout << stv[it] << endl;
  }
}