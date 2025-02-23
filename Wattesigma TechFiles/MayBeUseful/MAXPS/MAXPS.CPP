#include <bits/stdc++.h>

using namespace std;
long long a, b, c, d;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MAXPS.INP", "r", stdin);
    freopen("MAXPS.OUT", "w", stdout);
    cin >> a >> b >> c >> d;
    cout << max({a,b,c,d}) << "/" << min({a,b,c,d});
    return 0;
}
