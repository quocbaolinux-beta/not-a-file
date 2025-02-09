#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5;
int res, n, s, A[N+1];

bool check(int lim) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += max(0LL, A[i] - lim);

    return (sum >= s);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("durian.inp", "r", stdin);
    freopen("durian.out", "w", stdout);
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> A[i];

    int l = 0, r = 1e9;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (check(mid)) {
            res = mid;
            l = mid + 1;
        } else
            r = mid - 1;
    }

    cout << res;

    return 0;
}
