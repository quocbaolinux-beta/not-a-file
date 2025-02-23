#include <bits/stdc++.h>

using namespace std;
long long a, b, c, kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SOBH.INP", "r", stdin);
    freopen("SOBH.OUT", "w", stdout);
    cin >> a >> b >> c;
    kq=ceil(a/2.0) + ceil(b/2.0) + ceil(c/2.0);
    cout << kq;

    return 0;
}
