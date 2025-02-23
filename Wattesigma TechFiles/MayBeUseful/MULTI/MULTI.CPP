#include <bits/stdc++.h>

using namespace std;
long long a, b;
long long lcm (long long a, long long b)
{
    return (a/__gcd(a,b))*b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MULTI.INP", "r", stdin);
    freopen("MULTI.OUT", "w", stdout);
    cin >> a >> b;
    cout << lcm(a, b);
    return 0;
}
