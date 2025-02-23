#include <bits/stdc++.h>
using namespace std;
long double x;
long long t, kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CSLDT.INP", "r", stdin);
    freopen("CSLDT.OUT", "w", stdout);
    cin >> x;
    t=abs(x)*10;
    kq=t%10;
    cout << kq;
    return 0;
}
