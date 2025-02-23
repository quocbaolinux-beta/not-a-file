#include <bits/stdc++.h>
using namespace std;
long long a[10000001], t, t1, c;
int n, i;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("mulmax.inp", "r", stdin);
    freopen("mulmax.out", "w", stdout);
    cin >> n;
    for(i=1; i<=n; i++)
        cin >> a[i];
    sort((a+1), (a+1+n));
    t=a[1]*a[2];
    t1=a[n-1]*a[n];
    cout << max(t, t1);
    return 0;
}
