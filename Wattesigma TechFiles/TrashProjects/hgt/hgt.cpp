#include <bits/stdc++.h>
using namespace std;
long long n, i, j, m, oldn, oldm, kq;
long double s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> m >> n;
    oldn = n;
    oldm = m;
    kq=oldn-oldm;
    for(i=1; i<=n; i++)
        n=n*i;
    for(j=1; j<=m; j++)
        m=m*i;
    for (i=1; i<=kq; i++)
        kq=kq*i;
    s = n/(m*kq);
    cout << fixed<<setprecision(1)<< s;
    return 0;
}
