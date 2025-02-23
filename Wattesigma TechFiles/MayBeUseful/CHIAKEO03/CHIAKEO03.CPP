#include <bits/stdc++.h>
using namespace std;
long long a, b, c, t, gmax;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CHIAKEO03.INP", "r", stdin);
    freopen("CHIAKEO03.OUT", "w", stdout);
    cin >> a >> b >> c;
    gmax=max({a,b,c});
    t=a+b+c-gmax;
    cout << abs(gmax-t);
    return 0;
}
