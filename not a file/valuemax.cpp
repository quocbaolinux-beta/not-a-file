#include <bits/stdc++.h>
using namespace std;
long long a, b, c;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("VALUEMAX.INP", "r", stdin);
    freopen("VALUEMAX.OUT", "w", stdout);
    cin >> a >> b >> c;
    cout << max({a, b, c});
    return 0;
}