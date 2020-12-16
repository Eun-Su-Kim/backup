//생일
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int n, min, max, itmin, itmax;
  vector<string> strv;
  vector<int> iv, itv;
  cin >> n;
  while (n--) {
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    if (c.size() == 1) {
      d += "0" + c;
    } else {
      d += c;
    }
    if (b.size() == 1) {
      d += "0" + b;
    } else {
      d += b;
    }
    strv.push_back(a);
    iv.push_back(stoi(d));
    itv.push_back(stoi(d));
  }
  sort(iv.begin(), iv.end());
  min = iv[0];
  max = iv[iv.size() - 1];
  for (int i = 0; i < itv.size(); i++) {
    if (itv[i] == min) {
      itmin = i;
    }
    if (itv[i] == max) {
      itmax = i;
    }
  }
  cout << strv[itmax] << endl;
  cout << strv[itmin] << endl;
}