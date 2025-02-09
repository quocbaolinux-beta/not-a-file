#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b, n, m, gg=1e9;
ll power33(ll a, ll b)
{
    if (b==0) return 1;
    if (b==1) return a%gg;
    ll tmp=power33(a%gg, b/2);
    if (b%2==0) return (tmp%gg*tmp%gg)%gg;
    return (tmp%gg*tmp%gg*a)%gg;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("power.inp", "r", stdin);
    freopen("power.out", "w", stdout);
    cin >> a >> b >> n >> m;
    cout << power33(a, n) + power33(b, m);
    return 0;
}