#include <bits/stdc++.h>
using namespace std;
long long n, t[10001], a[10001], i, maxt;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("ADSINBAD.INP", "r", stdin);
    freopen("ADSINBAD.OUT", "w", stdout);
    cin >> n;
    for (i = 1; i <= n; ++i)
        cin >> a[i];
    t[1]=a[1];
    t[2]=max(a[1]+a[2], a[2]);
    t[3]=max({a[1]+a[3], a[2]+a[3], a[3]});
    t[4]=max({a[1]+a[2]+a[4], a[1]+a[3]+a[4], a[1]+a[4], a[2]+a[4], a[3]+a[4]});
    for(i=5; i<=n; i++)
        t[i]=max({t[i-2]+a[i], t[i-3]+a[i], t[i-3]+a[i-1]+a[i], t[i-4]+a[i-1]+a[i]});
    cout << max({t[n], t[n-1], t[n-2]});
    return 0;
}
