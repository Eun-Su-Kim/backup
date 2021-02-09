//내 학점을 구해줘
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, gp, sumgp;
    double grade, sumGrade;
    cin >> n;
    cout << fixed;;
    cout.precision(1);
    sumgp = 0;
    sumGrade = 0.0;
    for (int i = 0; i < n; i++) {
      cin >> gp >> grade;
      sumgp += gp;
      sumGrade += gp * grade;
    }
    cout << sumgp << " " << sumGrade / sumgp << '\n';
  }
}