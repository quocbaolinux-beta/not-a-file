#include <bits/stdc++.h>
#define int long long
using namespace std;
int a, b, c, d, mod;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c >> d >> mod;
    cout << (abs(a)*abs(b)*abs(c)*abs(d))%mod<< endl;
    return 0;
}
