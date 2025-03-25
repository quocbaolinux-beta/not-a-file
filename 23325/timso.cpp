#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isprime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int rev(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("timso.inp", "r", stdin);
    freopen("timso.out", "w", stdout);
    int p, q;
    cin >> p >> q;

    for (int x = p; x <= q; x++) {
        if (isprime(rev(x))) {
            cout << x << endl;
        }
    }
    return 0;
}