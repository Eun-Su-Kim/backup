//시험 성적
#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  if (90 <= a && a <= 100) {
    cout << "A" << endl;
  } else if (80 <= a && a <= 89) {
    cout << "B" << endl;
  } else if (70 <= a && a <= 79) {
    cout << "C" << endl;
  } else if (60 <= a && a <= 69) {
    cout << "D" << endl;
  } else {
    cout << "F" << endl;
  }
}