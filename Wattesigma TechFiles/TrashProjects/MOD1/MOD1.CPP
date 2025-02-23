#include <bits/stdc++.h>
using namespace std;
long long n, k, a[1000001], kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MOD1.INP", "r", stdin);
    freopen("MOD1.OUT", "w", stdout);
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        kq=i*(i+1);
    cout << kq%k;
    return 0;
}
