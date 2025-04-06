#include <bits/stdc++.h>
using namespace std;
long long sol(long long x, int a, int b) {
    return x / a + x / b - x / (1LL * a * b / __gcd(a, b));
}
long long n, a, b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("FINDIVAB.inp", "r", stdin);
    freopen("FINDIVAB.out", "w", stdout);
    cin >> n >> a >> b;
    long long l=1, r=1e18, ans;
    while (l <= r) {
        long long m = (l+r) / 2;
        if (sol(m, a, b) >= n) {
            ans = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    cout << ans;
    return 0;
}