//큰 수 A+B
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  string a, b;
  vector<int> av, bv, ansv;
  int upnum = 0;
  int tmp = 0;
  av.push_back(0);
  bv.push_back(0);
  cin >> a >> b;
  if (a.size() > b.size()) {
    for (int i = 0; i < a.size() - b.size(); i++) {
      bv.push_back(0);
    }
    for (int i = 0; i < a.size(); i++) {
      av.push_back(a[i] - 48);
    }
    for (int i = 0; i < b.size(); i++) {
      bv.push_back(b[i] - 48);
    }
    for (int i = av.size() -1; i >= 0; i--) {
      tmp = upnum + av[i] + bv[i];
      ansv.push_back(tmp % 10);
      if (tmp >= 10) {
        upnum = 1;
      } else {
        upnum = 0;
      }
    }
  } else if (a.size() < b.size()) {
    for (int i = 0; i < b.size() - a.size(); i++) {
      av.push_back(0);
    }
    for (int i = 0; i < a.size(); i++) {
      av.push_back(a[i] - 48);
    }
    for (int i = 0; i < b.size(); i++) {
      bv.push_back(b[i] - 48);
    }
    for (int i = bv.size() -1; i >= 0; i--) {
      tmp = upnum + av[i] + bv[i];
      ansv.push_back(tmp % 10);
      if (tmp >= 10) {
        upnum = 1;
      } else {
        upnum = 0;
      }
    }
  } else {
    for (int i = 0; i < a.size(); i++) {
      av.push_back(a[i] - 48);
    }
    for (int i = 0; i < b.size(); i++) {
      bv.push_back(b[i] - 48);
    }
    for (int i = bv.size() -1; i >= 0; i--) {
      tmp = upnum + av[i] + bv[i];
      ansv.push_back(tmp % 10);
      if (tmp >= 10) {
        upnum = 1;
      } else {
        upnum = 0;
      }
    }
  }
  for (int i = ansv.size() - 1; i >= 0; i--) {
    if (i == ansv.size() - 1 && ansv[i] == 0) continue;
    cout << ansv[i];
  }
  cout << endl;
}