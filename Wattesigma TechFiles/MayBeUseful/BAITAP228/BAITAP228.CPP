#include <bits/stdc++.h>
using namespace std;
long double a, b;
long double tbc, ttd;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("BAITAP228.INP", "r", stdin);
    freopen("BAITAP228.OUT", "w", stdout);
    cin >> a >> b;
    tbc = (a*a + b*b) / 2;
    ttd =(abs(a)+abs(b))/2;

    cout << fixed << setprecision(6) << tbc << endl << ttd;
    return 0;
}
