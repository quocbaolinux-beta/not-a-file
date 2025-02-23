#include <bits/stdc++.h>
using namespace std;
long long a[100001], n, bc, i;
long long bcnn(long long a, long long b)
{
    return (a/__gcd(a,b))*b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("COLUMN.INP", "r", stdin);
    freopen("COLUMN.OUT", "w", stdout);
    cin >> n;
    for (i=1; i<=n; i++)
        cin >> a[i];
    bc=a[1];
    for(i=2; i<=n; i++)
        bc=bcnn(bc, a[i]);
    for(i=1; i<=n; i++)
        cout << bc/a[i] << endl;
    return 0;
}
