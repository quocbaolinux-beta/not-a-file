#include <bits/stdc++.h>
using namespace std;
vector<int> get_divisors(int x) {
    vector<int> res;
    for (int i = 1; i * i <= x; ++i) {
        if (x % i == 0) {
            res.push_back(i);
            if (i != x / i) res.push_back(x / i);
        }
    }
    return res;
}
int main() {
    freopen("thaydoiso.inp", "r", stdin);
    freopen("thaydoiso.out", "w", stdout);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    map<int, int> cnt;
    for (int i = 0; i < n; ++i) {
        vector<int> divs = get_divisors(a[i]);
        for (int d : divs) {
            cnt[d]++;
        }
    }
    int res = 1;
    for (auto &p : cnt) {
        if (p.second >= n - 2) {
            res = max(res, p.first);
        }
    }
    cout << res << endl;
    return 0;
}