#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N], b[N], t[N];
int n, m = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    freopen("TRUONGSA.INP", "r", stdin);
    freopen("TRUONGSA.OUT", "w", stdout);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] % 2 != 0) {
            m++;
            b[m] = a[i];
        }
    }

    int res = 0;
    for (int i = 1; i <= m; i++) {
        t[i] = 1;
        for (int j = 1; j < i; j++) {
            if (b[j] < b[i]) {
                t[i] = max(t[i], t[j] + 1);
            }
        }
        res = max(res, t[i]);
    }

    cout << res;
    return 0;
}