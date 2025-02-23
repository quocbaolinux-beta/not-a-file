#include <bits/stdc++.h>
using namespace std;
long long a[1000001], n, k, uc, i;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("RESCAL.INP", "r", stdin);
    freopen("RESCAL.OUT", "w", stdout);
    cin >> n >>k;
    for(i=1; i<=n; i++)
        cin >> a[i];
    uc=__gcd(a[1], k);
    a[1]=a[1]/uc;
    k=k/uc;
    for(i=2; i<=n; i++)
    {
        uc=__gcd(a[i], k);
        a[i]=a[i]/uc;
        k=k/uc;
        if(k==1)
            break;
    }
    cout << k;
    return 0;
}
