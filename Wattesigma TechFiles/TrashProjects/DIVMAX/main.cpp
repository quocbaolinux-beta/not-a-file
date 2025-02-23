#include <bits/stdc++.h>
using namespace std;
long long a, b;
long long gcd (long long a, long long b)
{
    return __gcd(a, b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("main.inp", "r", stdin);
    //freopen("main.out", "w", stdout);
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}
