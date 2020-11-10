//소음
#include <iostream>
#include <string>
using namespace std;

int main() {
  string a, b;
  char it;
  cin >> a >> it >> b;
  if (it == '*') {
    cout << 1;
    for (int i = 0; i < a.size() + b.size() - 2; i++) {
      cout << 0;
    }
  } else if (it == '+'){
    if (a.size() == b.size()) {
      cout << 2;
      for (int i = 0; i < a.size() - 1; i++) {
        cout << 0;
      }
    } else if (a.size() > b.size()) {
      cout << 1;
      for (int i = 0; i < a.size() - b.size() - 1; i++) {
        cout << 0;
      }
      cout << 1;
      for (int i = 0; i < b.size() - 1; i++) {
        cout << 0;
      }
    } else {
      cout << 1;
      for (int i = 0; i < b.size() - a.size() - 1; i++) {
        cout << 0;
      }
      cout << 1;
      for (int i = 0; i < a.size() - 1; i++) {
        cout << 0;
      }
    }
  }
}