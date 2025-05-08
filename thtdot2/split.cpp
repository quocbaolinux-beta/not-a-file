#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct T {
    int n;
    vector<ll> mn, mx, lz;
    T(int _n, vector<ll>& a) : n(_n) {
        mn.resize(4 * n);
        mx.resize(4 * n);
        lz.resize(4 * n);
        bld(1, 1, n, a);
    }
    void bld(int i, int l, int r, vector<ll>& a) {
        if (l == r) {
            mn[i] = mx[i] = a[l];
            return;
        }
        int m = (l + r) / 2;
        bld(2 * i, l, m, a);
        bld(2 * i + 1, m + 1, r, a);
        mn[i] = min(mn[2 * i], mn[2 * i + 1]);
        mx[i] = max(mx[2 * i], mx[2 * i + 1]);
    }
    void push(int i) {
        if (lz[i]) {
            mn[i] += lz[i];
            mx[i] += lz[i];
            if (i * 2 < 4 * n) {
                lz[2 * i] += lz[i];
                lz[2 * i + 1] += lz[i];
            }
            lz[i] = 0;
        }
    }
    void upd(int i, int l, int r, int ql, int qr, ll x) {
        push(i);
        if (ql > r || qr < l) return;
        if (ql <= l && r <= qr) {
            lz[i] += x;
            push(i);
            return;
        }
        int m = (l + r) / 2;
        upd(2 * i, l, m, ql, qr, x);
        upd(2 * i + 1, m + 1, r, ql, qr, x);
        mn[i] = min(mn[2 * i], mn[2 * i + 1]);
        mx[i] = max(mx[2 * i], mx[2 * i + 1]);
    }
    pair<ll, ll> qry(int i, int l, int r, int ql, int qr) {
        push(i);
        if (ql > r || qr < l) return {LLONG_MAX, LLONG_MIN};
        if (ql <= l && r <= qr) return {mn[i], mx[i]};
        int m = (l + r) / 2;
        auto a = qry(2 * i, l, m, ql, qr);
        auto b = qry(2 * i + 1, m + 1, r, ql, qr);
        return {min(a.first, b.first), max(a.second, b.second)};
    }
    void upd(int l, int r, ll x) { upd(1, 1, n, l, r, x); }
    pair<ll, ll> qry(int l, int r) { return qry(1, 1, n, l, r); }
};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    T t(n, a);
    while (q--) {
        int op, l, r;
        cin >> op >> l >> r;
        if (op == 1) {
            ll x;
            cin >> x;
            t.upd(l, r, x);
        } else {
            vector<ll> dp(r - l + 2, LLONG_MIN / 2);
            dp[0] = 0;
            for (int i = 1; i <= r - l + 1; i++) {
                int j = max(0, i - 30); 
                auto [mn, mx] = t.qry(l + j, l + i - 1);
                dp[i] = dp[j] + mx - mn;
                if (i > 1) {
                    auto [mn2, mx2] = t.qry(l, l + i - 1);
                    dp[i] = max(dp[i], mx2 - mn2);
                }
            }
            cout << dp[r - l + 1] << '\n';
        }
    }
}