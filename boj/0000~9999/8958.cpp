//OX퀴즈
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int pl(int n) {
  int k = 0;
  for (int i = 0; i <= n; i++) {
    k += i;
  }
  return k;
}

int main() {
  int n;
  cin >> n;
  while (n--) {
    string ans;
    vector<char> ch;
    vector<int> stv;
    int score = 0;
    int st = 0;
    cin >> ans;
    for (int i = 0; i < ans.size(); i++) {
      ch.push_back(ans[i]);
    }
    while (ch.size()) {
      if (ch.back() == 'O') {
        st++;
        ch.pop_back();
      } else {
        stv.push_back(st);
        st = 0;
        ch.pop_back();
      }
    }
    stv.push_back(st);
    for (int i = 0; i < stv.size(); i++) {
      score += pl(stv[i]);
    }
    cout << score << endl;
  }
}