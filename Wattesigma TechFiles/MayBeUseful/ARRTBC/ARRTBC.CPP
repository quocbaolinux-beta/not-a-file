#include <bits/stdc++.h>
using namespace std;
long long a[1000001], n, i, gtln, t;
long double s, tbc;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("ARRTBC.INP","r",stdin);
    freopen("ARRTBC.OUT","w",stdout);
    cin >>n;
    for(i=1; i<=n; i++)
        cin >>a[i];

    s=0;
    for(i=1; i<=n; i++)
        s=s+a[i];
    tbc=s/n;

    t=0;
    for(i=1; i<=n; i++)
        if(a[i]>tbc)
            t=t+a[i];

    if(t==0)
        cout <<-1;
    else
        cout <<t;
    return 0;
}
