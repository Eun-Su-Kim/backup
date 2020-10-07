//2차원 배열의 합
#include <iostream>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int arr[N][M];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> arr[i][j];
    }
  }
  int K;
  cin >> K;
  for (int i = 0; i < K; i++) {
    int a, b, c, d;
    int s = 0;
    cin >> a >> b >> c >> d;
    if (a == c) {
      if (b == d) {
        cout << arr[a - 1][b - 1] << endl;
      } else {
        for (int j = b - 1; j < d; j++) {
          s += arr[a - 1][j];
        }
        cout << s << endl;
      }
    } else {
      for (int j = a - 1; j < c; j++) {
        for (int k = b - 1; k < d; k++) {
          s += arr[j][k];
        }
      }
      cout << s << endl;
    }
  }
}