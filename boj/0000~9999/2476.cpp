//주사위 게임
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  vector<int> v;
  cin >> n;
  while (n--) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c) {
      v.push_back(10000 + a * 1000);
    } else if (a == b) {
      v.push_back(1000 + a * 100);
    } else if (a == c) {
      v.push_back(1000 + a * 100);
    } else if (b == c) {
      v.push_back(1000 + b * 100);
    } else {
      if (a > b && a > c) {
        v.push_back(a * 100);
      } else if (b > a && b > c) {
        v.push_back(b * 100);
      } else if (c > a && c > a) {
        v.push_back(c * 100);
      }
    }
  }
  sort(v.begin(),v.end(),greater<int>());
  cout << v[0] << endl;
}