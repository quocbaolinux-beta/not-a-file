#include <bits/stdc++.h>
#define int long long
using namespace std;

const long long MOD = 1e9 + 7;
bool chk(int x) {
    while (x > 0) {
        if (x % 10 == 1 || x % 10 == 3) return true;
        x /= 10;
    }
    return false;
}
long long cnt(int n) {
    long long l = pow(10, n - 1);
    long long u = pow(10, n) - 1;
    long long c = 0;
    for (long long x = l; x <= u; ++x) {
        if (x % 13 == 0 && !chk(x)) c = (c + 1) % MOD;
    }
    return c;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    cout << cnt(n) << endl;
    return 0;
}
