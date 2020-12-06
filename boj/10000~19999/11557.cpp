//Yangjojang of The Year
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    vector<string> sv;
    vector<int> iv;
    string a;
    int b;
    int high = -1;
    int highindex = 0;
    cin >> n;
    while (n--) {
      cin >> a >> b;
      sv.push_back(a);
      iv.push_back(b);
    }
    for (int i = 0; i < iv.size(); i++) {
      if (iv[i] > high) {
        high = iv[i];
        highindex = i;
      }
    }
    cout << sv[highindex] << endl;
  }
}