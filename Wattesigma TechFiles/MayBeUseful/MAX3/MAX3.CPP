#include <bits/stdc++.h>

using namespace std;
long long a, b, c, kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MAX3.INP", "r", stdin);
    freopen("MAX3.OUT", "w", stdout);
    cin >> a >> b >> c;
    kq = max({a, b, c});
    cout << kq;
    return 0;
}
