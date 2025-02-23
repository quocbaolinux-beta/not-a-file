#include <bits/stdc++.h>
using namespace std;
long long a, i, n, b, c, d, bt, m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MODULO17.INP", "r", stdin);
    freopen("MODULO17.OUT", "w", stdout);
    cin >> n;
    m=4*2017;
    a=n%m;
    b=(n+1)%m;
    c=(n+2)%m;
    d=(n+3)%m;
    bt=(((((a*b)%m)*c)%m)*d)%m;
    cout << bt/3;
    return 0;
}
