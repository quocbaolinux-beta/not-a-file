#include <bits/stdc++.h>
#define ull unsigned long long
#define int long long
using namespace std;
int a, b, u;
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("bai2.inp", "r", stdin);
    freopen("bai2.out", "w", stdout);
    cin >> a >> b;
    u = b - a;
    cout << u - (a % u);
    return 0;
}