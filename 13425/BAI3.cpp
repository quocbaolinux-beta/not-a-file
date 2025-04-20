#include <bits/stdc++.h>
using namespace std;
long long a[1000001],n,i,t[1000001],maxtj,d,j,maxt;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);
    cin >>n;
    for( i=1;i<=n;i++)
        cin>>a[i];
     t[1]=1;
    for(i=2;i<=n;i++)
    {
        maxtj=0;
        for(j=1;j<=i-1;j++)
        if(a[i]-a[j]==d)
            maxtj=max(t[j],maxtj);
        t[i]=maxtj+1;

    }
    maxt=t[1];
    for(i=2;i<=n;i++)
        maxt=max(maxt,t[i]);
    cout <<maxt;
    return 0;
}