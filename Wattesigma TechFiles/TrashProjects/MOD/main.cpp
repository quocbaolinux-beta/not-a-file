#include <bits/stdc++.h>
using namespace std;
long long a[1000001], k, n, kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MOD.INP", "r", stdin);
    freopen("MOD.OUT", "w", stdout);
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    kq=1;
    for(int i=1; i<=n; i++)
    {
        kq = a[i] * a[i-1];
    }
    cout << kq%k;
    return 0;
}
