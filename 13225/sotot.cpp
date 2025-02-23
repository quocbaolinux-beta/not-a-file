#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b;
ll tongcs(ll n)
{
    ll ans=0;
    while(n>0)
    {
        ans=ans+n%10;
        n/=10;
    }
    return ans;
}
ll sotot(ll a, ll b)
{
    ll c=tongcs(a), d=tongcs(b);
    if(c>d) return a;
    else if(c<d) return b;
    else if(c==d) return min(a, b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("sotot.inp", "r", stdin);
    freopen("sotot.out", "w", stdout);
    cin >> a >> b;
    if(a==b)
    {
        cout << -1;
        return 0;
    }
    cout << sotot(a, b);
    return 0;
}