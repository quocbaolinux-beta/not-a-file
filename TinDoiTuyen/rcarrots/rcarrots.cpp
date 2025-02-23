#include <bits/stdc++.h>

using namespace std;
long long n,i,d[106],h[109];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("rcarrots.INP","r",stdin);
    freopen("rcarrots.OUT","w",stdout);

    cin >>n;
     for(i=1;i<=n;i++)
        cin >>h[i];
    d[1]=1;
    d[0]=0;
    for(i=2;i<=n+1;i++)
        if(d[i-1]+abs(h[i]-h[i-1])>d[i-2]+3*abs(h[i]-h[i-2]))
        d[i]=d[i-2]+3*abs(h[i]-h[i-2]);
    else
        d[i]=d[i-1]+abs(h[i]-h[i-1]);
       cout << d[n+1] ;
    return 0;
}
