#include <bits/stdc++.h>
#define ll long long
#define  N 100000
using namespace std;
ll n,m,s;
ll a[N+2];
ll b[N+2];
bool tim(ll x)
{
   ll d=1; ll c=m;
    while(d<=c)
        {
            ll giua=(d+c)/2;

                if (x==s-b[giua]) return true;
                if (x>s-b[giua]) c=giua-1;
                if (x<s-b[giua]) d=giua+1;
}
return false;

}
int main()
{
    freopen("manuequi.inp", "r", stdin);
    freopen("manuequi.out", "w", stdout);
    cin >> n >> m>>s;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=m;i++) cin>>b[i];
    sort (a+1,a+n+1);
    sort (b+1,b+m+1);
    ll res =0;
    for (int i=1; i<=n; i++)
        if (tim(a[i]))
        {
            res+=1;
            //                                                                                                  lol
        }
    cout << res;
    return 0;
}
