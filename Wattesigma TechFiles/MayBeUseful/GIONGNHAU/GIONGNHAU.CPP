#include <bits/stdc++.h>
using namespace std;
long long a, b, c;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("GIONGNHAU.INP", "r", stdin);
    freopen("GIONGNHAU.OUT", "w", stdout);
    cin >> a >> b >> c;
    if (a==b)
        cout << 2;
    else if (a==c)
        cout << 2;
    else if (b==c)
        cout << 2;
    else
        cout << 1;
    return 0;
}
