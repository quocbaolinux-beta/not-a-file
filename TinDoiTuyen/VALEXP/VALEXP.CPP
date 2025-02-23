#include <bits/stdc++.h>
using namespace std;
int a, x, b, y;
long long tu, mau, uc;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("VALEXP.INP", "r", stdin);
    freopen("VALEXP.OUT", "w", stdout);
    cin >> a >> x >> b >> y;
    tu = a*y+b*x;
    mau = x*y;
    uc = __gcd(tu, mau);
    tu=tu/uc;
    mau=mau/uc;
    cout << tu << endl << mau;
    return 0;
}
