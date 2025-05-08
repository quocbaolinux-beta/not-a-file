#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;
    
    vector<ll> b(n), a(n);
    for (int i = 0; i < n; ++i) cin >> b[i];
    for (int i = 0; i < n; ++i) cin >> a[i];

    int l = 0;
    ll sum = 0;
    int res = 0;

    for (int r = 0; r < n; ++r) {
        if (r > 0 && a[r - 1] % a[r] != 0) {
            l = r;
            sum = 0;
        }

        sum += b[r];

        while (sum > k) {
            sum -= b[l];
            l++;
        }

        res = max(res, r - l + 1);
    }

    cout << res << '\n';
    return 0;
}
