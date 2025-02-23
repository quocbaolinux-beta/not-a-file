#include <bits/stdc++.h>
using namespace std;
long long a, i, n, b, c, bt, m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MODULO.INP", "r", stdin);
    freopen("MODULO.OUT", "w", stdout);
    cin >> n;
    m=3*2018;
    a=2*n%m;
    b=(n+1)%m;
    c=(2*n+1)%m;
    bt=(((a*b)%m)*c)%m;
    cout << bt/3;
    return 0;
}
