//핸드폰 요금
#include <iostream>
#include <vector>
using namespace std;

int N;
int main() {
  int Y = 0; 
  int M = 0;
  int Sy = 0;
  int Sm = 0;

  vector<int> cl;

  cin >> N;

  while(N--) {
    int tmp;
    cin >> tmp;
    cl.push_back(tmp);
  }

  for (int i = 0; i < cl.size(); i++) {
    Y += (cl[i] / 30) + 1;
    M += (cl[i] / 60) + 1;
  }

  Sy = 10 * Y;
  Sm = 15 * M;

  if (Sy == Sm) {
    cout << "Y M " << Sy << endl; 
  } else if (Sy > Sm) {
    cout << "M " << Sm << endl;
  } else{
    cout << "Y " << Sy << endl;
  }
}