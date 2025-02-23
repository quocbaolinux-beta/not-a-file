#include <bits/stdc++.h>
using namespace std;
long long n, k, a[1000001], kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MOD.INP", "r", stdin);
    freopen("MOD.OUT", "w", stdout);
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    for(int i =1; i<=n; i++)
        kq = a[i] *a[i-1];
    kq = kq%k;
    cout << kq;
    return 0;
}
