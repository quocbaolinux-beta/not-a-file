#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d, kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("DIVMAX4N.INP", "r", stdin);
    freopen("DIVMAX4N.OUT", "w", stdout);
    cin >> a >> b >> c >> d;
    kq=__gcd(a,b);
    kq=__gcd(kq,c);
    kq=__gcd(kq,d);
    cout << kq;
    return 0;
}
