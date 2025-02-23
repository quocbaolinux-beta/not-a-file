#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, kq;
long long lcm(long long a, long long b)
{
    return a*b/__gcd(a, b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("FNUM4LCM.INP", "r", stdin);
    freopen("FNUM4LCM.OUT", "w", stdout);
    cin >> a >> b >> c >> d;
    kq=lcm(a, b);
    kq=lcm(kq, lcm(c, d));
    cout << kq;
    return 0;
}