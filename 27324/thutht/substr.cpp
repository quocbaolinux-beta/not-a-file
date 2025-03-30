#include <bits/stdc++.h>
using namespace std;

bool iss(const string& sub, const string& main) {
    int i = 0, j = 0;
    while (i < sub.size() && j < main.size()) {
        if (sub[i] == main[j]) i++;
        j++;
    }
    return i == sub.size();
}

vector<string> subs;
string x, y;
int n;

void gens(string cur, int idx) {
    if (cur.size() == n) {
        if (iss(cur, x) && !iss(cur, y))
            subs.push_back(cur);
        return;
    }
    if (idx == x.size()) return;
    gens(cur + x[idx], idx + 1);
    gens(cur, idx + 1);
}

int main() {
    int m, k;
    cin >> m >> n >> k;
    cin >> x >> y;

    gens("", 0);
    sort(subs.begin(), subs.end());

    for (int i = 0; i < m; ++i) {
        string s;
        cin >> s;
        if (!iss(s, x) || iss(s, y)) {
            cout << -1 << endl;
        } else {
            auto it = find(subs.begin(), subs.end(), s);
            cout << (it == subs.end() ? -1 : (distance(subs.begin(), it) + 1) % k) << endl;
        }
    }
    return 0;
}