#include <bits/stdc++.h>
using namespace std;
long long n, m, nc, mc;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("BAITAP315.INP", "r", stdin);
    freopen("BAITAP315.OUT", "w", stdout);
    cin >> n >> m;
    nc=n;
    mc=m;
    if(n>m)
    {
        m=n-m;
        n=n+mc;
    }
    else
    {
        n=m-n;
        m=m+nc;
    }
    cout << n << " " << m;
    return 0;
}
