#include <bits/stdc++.h>
using namespace std;
long long n, m, a, b, c;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("PETS.INP", "r", stdin);
    freopen("PETS.OUT", "w", stdout);
    cin >> n >> m >> a >> b >> c;
    if (a > n)
        a=n;
    if (b > m)
        b=m;
    if (a+b+c>=n+m)
        cout << 0;
    else
        cout << (n+m)-(a+b+c);
    return 0;
}
