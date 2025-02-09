#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, c, d, mod, res;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c >> d >> mod;
    res = (a+b)*(c+d)/mod;
    cout << res;
    return 0;
}