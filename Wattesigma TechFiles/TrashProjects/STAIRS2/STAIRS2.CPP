#include <bits/stdc++.h>
using namespace std;
long long n,d[101], a[101], i;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    freopen("STAIRS2.INP","r",stdin);
    freopen("STAIRS2.OUT","w",stdout);
    cin >> n;
    for(i=1; i<=n; i++)
        cin >> a[i];
    if(a[1]==0)
        d[1]=0;
    else
        d[1]=1;
    if(a[2]==0)
        d[2]=0;
    else
    {
        if(a[1]==0)
            d[2]=1;
        else
            d[2]=2;
    }
    for(i=3; i<=n; i++){
        if(a[i]==0)
            d[i]=0;
        else
            d[i]=d[i-1]+d[i-2];
    }
    cout << d[n];
    return 0;
}
