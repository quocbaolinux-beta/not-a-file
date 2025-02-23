#include <bits/stdc++.h>
using namespace std;
int n, a[25001], d[25001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("NETWORKC.INP", "r", stdin);
    freopen("NETWORKC.OUT", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    d[2]=a[1];
    d[3]=a[1]+a[2];
    d[4]=a[1]+a[3];
    for(int i=5; i<=n; i++)
        d[i]=min(d[i-2]+a[i-1], d[i-3]+a[i-2]+a[i-1]);
    return 0;
}
