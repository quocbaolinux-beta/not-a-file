#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int n;
long long f[100001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    f[1]=1;
    f[2]=1;
    for (int i=3; i<=n; i++)
        f[i]=f[i-1]+f[i-2];
    cout << f[n]%mod;
    return 0;
}