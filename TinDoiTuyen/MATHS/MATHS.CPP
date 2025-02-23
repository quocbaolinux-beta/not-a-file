#include <bits/stdc++.h>
using namespace std;
long long a, b, ans, i, e, c, x, y, d[]={};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MATHS.INP", "r", stdin);
    freopen("MATHS.OUT", "w", stdout);
    cin >> a >> b;
    for(int i = a; i<=b; i++)
        ans = ans + pow(2, i);
    cout << ans%127 << endl;
    return 0;
}
