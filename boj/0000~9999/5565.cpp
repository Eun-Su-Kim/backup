//영수증
#include <iostream>
using namespace std;

int main() {
  int sum, n;
  int cnt = 0;
  cin >> sum;
  for (int i = 0; i < 9; i++) {
    cin >> n;
    cnt += n;  
  }
  cout << sum - cnt << '\n';
}