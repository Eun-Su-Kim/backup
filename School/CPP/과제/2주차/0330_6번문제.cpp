//시간계산
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int dd, hh, mm, ss, cnt;
        dd = 0;
        cnt = 0;
        while (n--) {
            int  H, M, S, h, m, s;
            cin >> H >> M >> S >> h >> m >> s;
            cnt += (h - H) * 3600;
            cnt += (m - M) * 60;
            cnt += s - S;
        }
        hh = cnt / 3600;
        mm = (cnt - hh * 3600) / 60;
        ss = cnt - (hh * 3600) - (mm * 60);
        while (hh >= 24) {
            dd++;
            hh -= 24;
        } 
        cout << dd << " " << hh << " " << mm << " " << ss << endl;
    }
}