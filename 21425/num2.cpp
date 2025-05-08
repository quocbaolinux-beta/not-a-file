#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

string num;
map<tuple<int, int, int, bool, bool>, int> memo; 

int dfs(int i, int mod, int prev, bool tight, bool zero) {
    if (i == num.size()) return (mod == 0 && !zero);

    auto key = make_tuple(i, mod, prev, tight, zero);
    if (memo.count(key)) return memo[key];

    int res = 0;
    int lim = tight ? (num[i] - '0') : 9;

    for (int d = 0; d <= lim; d++) {
        if (!zero && d == prev) continue; 

        bool next_tight = tight && (d == lim);
        bool next_zero = zero && (d == 0);

        res = (res + dfs(i + 1, (mod * 10 + d) % 17, d, next_tight, next_zero)) % MOD;
    }

    return memo[key] = res;
}

int count(string s) {
    num = s;
    memo.clear();
    return dfs(0, 0, -1, true, true);
}

string sub1(string s) {
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '0') s[i--] = '9';
    if (i >= 0) s[i]--;
    if (s[0] == '0') s.erase(0, 1);
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string L, R;
    cin >> L >> R;

    string L1 = sub1(L);
    int ans = (count(R) - count(L1) + MOD) % MOD;

    cout << ans << '\n';
    return 0;
}
