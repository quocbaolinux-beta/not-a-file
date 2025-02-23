#include <bits/stdc++.h>
using namespace std;
int n, i, j;
long long a[100000001], t, t1, b, c;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MAX3M.INP", "r", stdin);
    freopen("MAX3M.OUT", "w", stdout);
    cin >> n;
    for(i=1; i<=n; i++)
        cin >> a[i];
    sort((a+1),(a+1+n));
    t=a[n-2]*a[n-1]*a[n];
    t1=a[1]*a[2]*a[n];
    cout << max(t, t1);
    return 0;
}
