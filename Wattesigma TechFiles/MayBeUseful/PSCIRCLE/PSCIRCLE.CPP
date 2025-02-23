#include <bits/stdc++.h>
using namespace std;
long long r, x, y;
long double p, s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("PSCIRCLE.INP", "r", stdin);
    freopen("PSCIRCLE.OUT", "w", stdout);
    cin >> x >> y >> r;
    p=r*2*3.14;
    s=r*r*3.14;
    cout << fixed << setprecision(2) << p << endl << s;
    return 0;
}
