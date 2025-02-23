#include <bits/stdc++.h>
using namespace std;
long long a, b, c, kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("VOTEMAST.INP", "r", stdin);
    freopen("VOTEMAST.OUT", "w", stdout);
    cin >> a >> b >> c;
    kq=max(b, c);
    if(a>kq)
        cout << 0;
    else
        cout << kq - a + 1;
    return 0;
}
