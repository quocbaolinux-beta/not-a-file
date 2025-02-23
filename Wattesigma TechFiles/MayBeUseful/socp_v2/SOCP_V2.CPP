#include <bits/stdc++.h>
using namespace std;
long long a, b, i, t;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SOCP_V2.INP", "r", stdin);
    freopen("SOCP_V2.OUT", "w", stdout);
    cin >> a >> b;
    for(i=ceil(sqrt(a)); i<=floor(sqrt(b)); i++)
        cout << i * i << " ";
    return 0;
}
