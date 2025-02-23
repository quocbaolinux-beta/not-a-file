#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
long long a[N], t[4 * N];

void b(int n, int s, int e) {
    if (s == e) t[n] = a[s];
    else {
        int m = (s + e) / 2;
        b(n * 2, s, m);
        b(n * 2 + 1, m + 1, e);
        t[n] = t[n * 2] + t[n * 2 + 1];
    }
}

long long ug(int n, int s, int e, int l, int r, long long v) {
    if (r < s || e < l) return;
    if (l <= s && e <= r) {
        t[n] += (e - s + 1) * v;
        return;
    }
    int m = (s + e) / 2;
    ug(n * 2, s, m, l, r, v);
    ug(n * 2 + 1, m + 1, e, l, r, v);
    t[n] = t[n * 2] + t[n * 2 + 1];
}

long long q(int n, int s, int e, int l, int r) {
    if (r < s || e < l) return 0;
    if (l <= s && e <= r) return t[n];
    int m = (s + e) / 2;
    return q(n * 2, s, m, l, r) + q(n * 2 + 1, m + 1, e, l, r);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("QUERY.INP", "r", stdin);
    //freopen("QUERY.OUT", "w", stdout);
    int N, Q; cin >> N >> Q;
    for (int i = 1; i <= N; ++i) cin >> a[i];
    b(1, 1, N);
    while (Q--) {
        int t, p, m, x, u, v;
        cin >> t;
        if (t == 1) cin >> p >> m >> x, ug(1, 1, N, p, m, x);
        else cin >> u >> v, cout << q(1, 1, N, u, v) << endl;
    }
}
