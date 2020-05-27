//IPv4주소변환
#include <iostream>
#include <sstream>
#include <bitset>
#include <vector>
using namespace std;

vector<string> split(string s, char d) {
    vector<string> sv;
    stringstream stst(s);
    string temp;
    
    while (getline(stst, temp, d)) {
        sv.push_back(temp);
    }

    return sv;
}

string chbit8(int n) {
    return bitset<8>(n).to_string();
}

string chbit32(unsigned int n) {
    return bitset<32>(n).to_string();
}

int chnum8(string s) {
    return bitset<8>(s).to_ulong();
}

unsigned int chnum32(string s) {
    return bitset<32>(s).to_ulong();
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string a;
        int num;
        unsigned int b;
        cin >> num;
        if (num == 1) {
            cin >> a;
            string sta = "";
            vector<string> stv = split(a, '.');
            for (int i = 0; i < stv.size(); i++) {
                sta += chbit8(stoi(stv[i]));
            }
            cout << chnum32(sta) << endl;
        } else {
            cin >> b;
            string stb = chbit32(b);
            int ans[4];
            int start = 0, gap = 8;
            for (int i = 0; i < 4; i++) {
                ans[i] = chnum8(stb.substr(start, start+gap));
                start += gap;
            }
            cout << ans[0] << '.' << ans[1] << '.' << ans[2] << '.' << ans[3] << endl;
        }
    }
}