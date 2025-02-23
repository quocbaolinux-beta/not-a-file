#include <bits/stdc++.h>

using namespace std;
long long d1,d2,n,i,a[1000001],gtln,gtnn;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    freopen("MINMAXARRAY.INP","r",stdin);
    freopen("MINMAXARRAY.OUT","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
        cin >>a[i];

    gtnn=a[1];
    gtln=a[1];
    for(i=2;i<=n;i++)
    {
         gtnn=min(gtnn,a[i]);
         gtln=max(gtln,a[i]);
    }

    d1=0;
    d2=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]==gtnn)
            d1++;
        if(a[i]==gtln)
            d2++;
    }

    cout<<gtnn<<" "<<d1<<endl;
    cout<<gtln<<" "<<d2;

    return 0;
}
