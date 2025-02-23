#include <bits/stdc++.h>
using namespace std;
long long a[101], n, uc, i, tu, mau;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SUMFRACT.INP", "r", stdin);
    freopen("SUMFRACT.OUT", "w", stdout);
    cin >> n;
    for(i=1; i<=n; i++)
        cin >> a[i];
    tu = 1;
    mau=a[1];
    for(i=1; i<=n; i++)
    {
        tu=tu*a[i]+mau;
        mau=mau*a[i];
        uc=__gcd(tu, mau);
        tu=tu/uc;
        mau=mau/uc;
    }
    cout << tu <<endl;
    cout << mau;
    return 0;
}
