#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int sb = b + c;
  int slb = sb % 60;
  int sla = (a + sb / 60) % 24;
  cout << sla << " " << slb << endl;
}