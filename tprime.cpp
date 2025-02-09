#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll demuoc(ll n) {
    ll dem = 0;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i == n) dem++;
            else dem += 2;
        }
    }
    return dem;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("tprime.inp", "r", stdin);
    freopen("tprime.out", "w", stdout);

    ll n, demu = 0;
    cin >> n;

    for (ll i = 1; i <= n; i++) {
        if (demuoc(i) == 3) demu++;
    }

    cout << demu;
    return 0;
}