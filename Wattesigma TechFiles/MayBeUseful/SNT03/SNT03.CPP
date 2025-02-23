#include <bits/stdc++.h>
using namespace std;
long long a[1000001], i, ntmax, ntmin, n;
long long isprime(long long n)
{
    long long i;
    if(n<2)
        return 0;
    for(i=2; i<=sqrt(n); i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SNT03.INP", "r", stdin);
    freopen("SNT03.OUT", "w", stdout);
    cin >> n;
    for(i=1; i<=n; i++)
        cin >> a[i];
    ntmin = 1e18;
    ntmax = -1e18;
    for(i=1; i<=n; i++)
        if(isprime(a[i])==1)
        {
            ntmin=min(ntmin, a[i]);
            ntmax=max(ntmax, a[i]);
        }
    if((ntmin==1e18) || (ntmax == -1e18))
        cout << 1;
    else
        cout << ntmin << endl << ntmax;
    return 0;
}
