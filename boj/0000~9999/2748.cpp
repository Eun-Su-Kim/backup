//피보나치 수 2
#include <iostream>
using namespace std;

long long memo[91];

long long fibo(int a) {
  if (memo[a] != 0) {
    return memo[a];
  }
  if (a == 0) {
    memo[a] = 0;
  } else if (a == 1) {
    memo[a] = 1;
  } else {
    memo[a] = fibo(a - 1) + fibo(a - 2);
  }
  return memo[a];
}

int main() {
  int n;
  cin >> n;
  cout << fibo(n) << '\n';
}