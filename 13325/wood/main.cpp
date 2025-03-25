#include <bits/stdc++.h>
#define int int
using namespace std;
const int MOD = 1e9 + 7;
int dacbiet(int a, int b, int n, int m) {
    int uclnab = __gcd(a, b);
    int ha = a / uclnab;
    int hb = b / uclnab;

    int hdb = min(n, m) + 1;
    return hdb % MOD;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("wood.inp", "r", stdin);
    freopen("wood.out", "w", stdout);
    int a, b, n, m;
    cin >> a >> b >> n >> m;
    cout << dacbiet(a, b, n, m) << endl;
    return 0;
}
