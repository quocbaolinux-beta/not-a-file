#include <bits/stdc++.h>
#define int long long
using namespace std;
int a, b, s, e;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("sqr.inp", "r", stdin);
    freopen("sqr.out", "w", stdout);
    cin >> a >> b;
    s=ceil(sqrtl(double(a)));
    e=floor(sqrtl(double(b)));
    if (s>e) cout << 0;
    else cout << e-s+1;
    return 0;
}