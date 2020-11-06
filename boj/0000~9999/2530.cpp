//인공지능 시계
#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int sd = c + d;
  int slc = sd % 60;
  int slb = (b + (sd / 60)) % 60;
  int sla = (a + (b + (sd / 60)) / 60) % 24;
  cout << sla << " " << slb << " " << slc << endl;
}