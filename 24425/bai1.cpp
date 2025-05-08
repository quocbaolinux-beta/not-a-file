#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("bai1.inp", "r", stdin);
    freopen("bai1.out", "w", stdout);
    int n;
    cin >> n;

    int l = (int)sqrt(n);
    int r = l + 1;

    if (n - l*l <= r*r - n) cout << l*l;
    else cout << r*r;

    return 0;
}

