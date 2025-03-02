#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("THUPHU.INP", "r", stdin);
    freopen("THUPHU.OUT", "w", stdout);

    int r, c;
    vector<vector<int>> g;
    string l;

    while (getline(cin, l)) {
        vector<int> row;
        string n;
        for (char ch : l) {
            if (isdigit(ch)) {
                n += ch;
            } else if (!n.empty()) {
                row.push_back(stoi(n));
                n = "";
            }
        }
        if (!n.empty()) {
            row.push_back(stoi(n));
        }
        g.push_back(row);
    }

    r = g.size();
    c = g[0].size();

    vector<vector<bool>> v(r, vector<bool>(c, false));
    int ms = 0;
    vector<pair<int, int>> mr;
    int mo = 0;

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (g[i][j] > 0 && !v[i][j]) {
                queue<pair<int, int>> q;
                vector<pair<int, int>> reg;
                int o = 0;

                q.push({i, j});
                v[i][j] = true;

                while (!q.empty()) {
                    int rr = q.front().first;
                    int cc = q.front().second;
                    q.pop();

                    reg.push_back({rr + 1, cc + 1});
                    o += g[rr][cc];

                    int dr[] = {-1, 1, 0, 0};
                    int dc[] = {0, 0, -1, 1};

                    for (int k = 0; k < 4; ++k) {
                        int nr = rr + dr[k];
                        int nc = cc + dc[k];

                        if (nr >= 0 && nr < r && nc >= 0 && nc < c && g[nr][nc] > 0 && !v[nr][nc]) {
                            q.push({nr, nc});
                            v[nr][nc] = true;
                        }
                    }
                }

                if (reg.size() > ms || (reg.size() == ms && o > mo)) {
                    ms = reg.size();
                    mr = reg;
                    mo = o;
                }
            }
        }
    }

    cout << ms << endl;
    for (const auto& p : mr) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}