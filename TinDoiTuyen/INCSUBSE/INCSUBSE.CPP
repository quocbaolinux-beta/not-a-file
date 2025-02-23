#include <bits/stdc++.h>
using namespace std;
int n;
long long a[100001], d[100001], maxdj, maxd;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("INCSUBSE.INP", "r", stdin);
    freopen("INCSUBSE.OUT", "w", stdout);
    cin >> n;
    for(long long i=1; i<=n; i++)
        cin >> a[i];
    d[1]=1;
    for (long long i=2; i<=n; i++)
    {
        maxdj=0;
        for(long long j=1; j<=i-1; j++)
            if(a[j]<=a[i])
                maxdj = max(maxdj, d[j]);
        d[i]=maxdj+1;
    }
    maxd=d[1];
    for(long long i=2; i<=n; i++)
        maxd=max(maxd, d[i]);
    cout << maxd;
    return 0;
}
