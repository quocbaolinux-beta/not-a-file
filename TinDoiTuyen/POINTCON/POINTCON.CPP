#include <bits/stdc++.h>

using namespace std;
long long a[1001],b[1001],t[1001],d[1001],n,m,maxdj,maxtj,maxt,maxd;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    freopen("POINTCON.INP","r",stdin);
    freopen("POINTCON.OUT","w",stdout);
    cin >>n >>m;;
    for(int i=1;i<=n;i++)
        cin >>a[i];
        for(int j=1;j<=m;j++)
            cin >>b[j];
    d[1]=1;
     maxd=d[1];
     for(int i=2;i<=n;i++)
    {
    maxdj=0;
        for(int j=1;j<=i-1;j++)
            if(a[j]<a[i])
            maxdj=max(maxdj,d[j]);
        d[i]=maxdj+1;
  maxd=max(maxd,d[i]);
    }
     t[1]=1;
      maxt=t[1];
      for(int i = 2; i <= m; i++) {

            maxtj=0;
        for(int j=1;j<=i-1;j++)
            if(b[j]<b[i])
            maxtj=max(maxtj,t[j]);
        t[i]=maxtj+1;
  maxt=max(maxt,t[i]);
      }
  cout <<min(maxd,maxt);
    return 0;
}
