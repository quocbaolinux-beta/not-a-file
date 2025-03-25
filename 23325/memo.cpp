#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("memo.inp", "r", stdin);
    freopen("memo.out", "w", stdout);
    int n, t, m;
    cin >> n >> t >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sum = 0;
    for (int i = 0; i < m; i++) {
        sum += a[(t - 1 + i) % n];
    }

    cout << sum;
    return 0;
}