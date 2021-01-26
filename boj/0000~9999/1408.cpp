//24
#include <iostream>
#include <string>
using namespace std;

string zeroPlus(int x) {
  string a = to_string(x);
  if (x < 10) {
    return "0" + a;
  } else {
    return a;
  }
}

int main() {
  string a, b;
  int ha, hb, ma, mb, sa, sb, ssa, ssb;
  int sol, solh, solm, sols;
  cin >> a >> b;
  ha = (a[0] - 48) * 10 + (a[1] - 48);
  hb = (b[0] - 48) * 10 + (b[1] - 48);
  ma = (a[3] - 48) * 10 + (a[4] - 48);
  mb = (b[3] - 48) * 10 + (b[4] - 48);
  sa = (a[6] - 48) * 10 + (a[7] - 48);
  sb = (b[6] - 48) * 10 + (b[7] - 48);
  ssa = ha * 3600 + ma * 60 + sa;
  ssb = hb * 3600 + mb * 60 + sb;
  if (ssa > ssb) {
    sol = (ssb + (24 * 3600)) - ssa;
    solh = sol / 3600;
    solm = (sol - (3600 * solh)) / 60;
    sols = sol - (3600 * solh) - (60 * solm);
    cout << zeroPlus(solh) << ":" << zeroPlus(solm) << ":" << zeroPlus(sols) << endl;
  } else {
    sol = ssb - ssa;
    solh = sol / 3600;
    solm = (sol - (3600 * solh)) / 60;
    sols = sol - (3600 * solh) - (60 * solm);
    cout << zeroPlus(solh) << ":" << zeroPlus(solm) << ":" << zeroPlus(sols) << endl;
  }
}
