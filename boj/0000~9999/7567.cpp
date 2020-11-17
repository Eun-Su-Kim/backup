//그릇
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<char> vs;
  int cnt = 0;
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    vs.push_back(s[i]);
  }
  while (!vs.empty()) {
    char a = vs.back();
    vs.pop_back();
    if (a == vs.back()) {
      cnt += 5;
    } else {
      cnt += 10;
    }
  }
  cout << cnt << endl;
}