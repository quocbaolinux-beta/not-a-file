#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("QUERY.INP", "r", stdin);
    //freopen("QUERY.OUT", "w", stdout);
    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < q; ++i) {
        int type;
        cin >> type;

        if (type == 1) {
            int p, m, x;
            cin >> p >> m >> x;
            for (int j = p - 1; j < m; ++j) {
                a[j] += x;
            }
        } else {
            int u, v;
            cin >> u >> v;
            long long sum = 0;
            for (int j = u - 1; j < v; ++j) {
                sum += a[j];
            }
            cout << sum << endl;
        }
    }

    return 0;
}