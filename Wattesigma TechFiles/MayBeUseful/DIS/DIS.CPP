#include<bits/stdc++.h>
using namespace std;
long long x[101],y[101],n,i,j;
long double kcmax,kc;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    freopen("DIS.INP","r",stdin);
    freopen("DIS.OUT","w",stdout);
    cin >> n;
    for (i = 1; i <= n; i++)
    cin >> x[i]>>y[i];
    kcmax=0;
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
        {
             kc=sqrt(((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j])));
             kcmax=max(kcmax,kc);
        }
    cout<<fixed<<setprecision(2)<<kcmax;
    return 0;
}
