#include <bits/stdc++.h>
#define int long long
using namespace std;
int gb(int n) {
    while (n >= 10) {
        int product = 1;
        while (n > 0) {
            product *= (n % 10);
            n /= 10;
        }
        n = product;
    }
    return n;
}
int n;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("gocboi.inp", "r", stdin);
    freopen("gocboi.out", "w", stdout);
    cin >> n;
    cout << gb(n);
    return 0;
}
