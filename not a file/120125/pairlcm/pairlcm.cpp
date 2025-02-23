#include <bits/stdc++.h>
using namespace std;
long long lcm(long long a, long long b)
{
    return (a / __gcd(a, b)) * b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("pairlcm.inp", "r", stdin);
    freopen("pairlcm.out", "w", stdout);
    return 0;
}
