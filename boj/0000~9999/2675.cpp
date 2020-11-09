//문자열 반복
#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int a;
    string st;
    cin >> a;
    cin >> st;
    for (int i = 0; i < st.size(); i++) {
      for (int j = 0; j < a; j++) {
        cout << st[i];
      }
    }
    cout << endl;
  }
}