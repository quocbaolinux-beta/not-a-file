#include <bits/stdc++.h>
using namespace std;
long long a[1000001], n, uc, i;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("DIVMAXN.INP", "r", stdin);
    freopen("DIVMAXN.OUT", "w", stdout);
    cin >> n;
    for(i=1; i<=n; i++)
        cin >> a[i];
    uc=a[1];
    for(i=1; i<=n; i++)
        uc=__gcd(uc, a[i]);
    cout << uc;
    return 0;
}
