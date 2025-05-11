#include <bits/stdc++.h>

using namespace std;
const int MAXX=1e6;
long long x1,x2,n,q,a[MAXX],sum[MAXX];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    freopen("SUMSENUM.inp","r",stdin);
    freopen("SUMSENUM.out","w",stdout);
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sum[0]=0;
    for(int i=1;i<=n;i++)
        sum[i]=sum[i-1]+a[i];
    while(q--){
        cin>>x1>>x2;
    cout<<sum[x2]-sum[x1-1]<<endl;
    }
    return 0;
}