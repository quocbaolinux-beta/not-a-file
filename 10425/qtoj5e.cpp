#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long modpow(long long a, long long b) {
    long long res = 1;
    a %= MOD;
    while (b > 0) {
        if (b % 2)
            res = res * a % MOD;
        a = a * a % MOD;
        b /= 2;
    }
    return res;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    long long total = modpow(k, 1LL * n * m);
    long long no_row = modpow((modpow(k, m) - k + MOD) % MOD, n);
    long long no_col = modpow((modpow(k, n) - k + MOD) % MOD, m);
    long long both = modpow((k - 1 + MOD) % MOD, 1LL * n * m);  

    long long none = (no_row + no_col - both + MOD) % MOD;
    if (none < 0) none += MOD;

    long long res = (total - none + MOD) % MOD;

    cout << res << endl;
    return 0;
}
