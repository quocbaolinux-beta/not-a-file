#include <bits/stdc++.h>
using namespace std;
long double xa, xb, ya, yb, kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("DISTANAB.INP", "r", stdin);
    freopen("DISTANAB.OUT", "w", stdout);
    cin >> xa >> xb;
    cin >> ya >> yb;

    kq = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    cout <<fixed<<setprecision(2)<< kq;
    return 0;
}
