#include <bits/stdc++.h>
using namespace std;
long long a, b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("UCLN.INP", "r", stdin);
    freopen("UCLN.OUT", "w", stdout);
    cin >> a >> b;
    cout << __gcd(a,b);
    return 0;
}
