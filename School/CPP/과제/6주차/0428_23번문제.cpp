//방의크기구하기
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int t, m, n, ans, cnt;
string map[110];
bool check[110][110];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
vector<int> r;

void init() {
    cin >> m >> n;
    ans = 0;
    cnt = 0;
    r.clear();

    for (int i=0; i<n; i++) {
        cin >> map[i];
    }
    for (int y=0; y<n; y++) {
        for (int x=0; x<m; x++) {
            check[y][x] = true;
        }   
    }
}

void dfs(int X, int Y) {
    cnt++;
    check[Y][X] = false;
    
    for (int d=0; d<4; d++) {
        int next_X = X + dx[d];
        int next_Y = Y + dy[d];

        if (next_X<0 || next_Y<0 || next_X>=m || next_Y>=n) {
            continue;
        }
        if (map[next_Y][next_X] == '.' && check[next_Y][next_X]) {
            dfs(next_X, next_Y);
        }
    }
}

void solve() {
    for (int y=0; y<n; y++) {
        for (int x=0; x<m; x++) {
            if (map[y][x] == '.' && check[y][x]) {
                cnt = 0;
                ans++;
                dfs(x, y);
                r.push_back(cnt);
            }
        }
    }
}

int main() {
    cin >> t;
    while (t--) {
        init();
        solve();

        cout << ans << endl;
        sort(r.begin(),r.end());
        for (int i=r.size()-1; i>=0; i--) {
            cout << r[i] << " ";
        }
        cout << endl;

    }
}
/*
8
57 53 42 35 13 6 4 2
1
3
1
1
*/