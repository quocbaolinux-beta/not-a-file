#include <bits/stdc++.h>

using namespace std;
long long a, b, kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MAX2.INP", "r", stdin);
    freopen("MAX2.OUT", "w", stdout);
    cin >> a >> b;
    kq = max(a, b);
    cout << kq;
    return 0;
}
