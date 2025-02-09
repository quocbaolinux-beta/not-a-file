#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isCompletelyPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    freopen("sntotd.inp", "r", stdin);
    freopen("sntotd.out", "w", stdout);

    ll n, m, u, v;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    while (m--) {
        cin >> u >> v;
        int dem = 0;
        for (int i = u - 1; i < v; ++i) {
            if (isCompletelyPrime(a[i])) dem++;
        }
        cout << dem << endl;
    }

    return 0;
}