#include <bits/stdc++.h>
using namespace std;
long long a, n, k, i, m, b, c, bt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MODULO10.INP", "r", stdin);
    freopen("MODULO10.OUT", "w", stdout);
    cin >> n >> k;
    m=6*k;
    a=n%m;
    b=(n+1)%m;
    c=(2*n+1)%m;
    bt=(((a%b)%m)*c)%m;
    cout << bt/6;
    return 0;
}
