//팰린드롬인지 확인하기
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int cnt = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != s[s.size() - i - 1]) {
      cnt++;
    }
  }
  if (cnt == 0) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
}