//개표
#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  int acnt = 0;
  int bcnt = 0;
  string vo;
  cin >> n >> vo;
  for (int i = 0; i < n; i++) {
    if (vo[i] == 'A') {
      acnt++;
    } else if (vo[i] == 'B') {
      bcnt++;
    }
  }
  if (acnt == bcnt) {
    cout << "Tie" << endl;
  } else if (acnt > bcnt) {
    cout << "A" << endl;
  } else if (acnt < bcnt) {
    cout << "B" << endl;
  }
}