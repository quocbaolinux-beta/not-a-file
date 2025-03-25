#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("maxs.inp", "r", stdin);
    freopen("maxs.out", "w", stdout);
    cin >> n;
    vector<ll>a(n);
    for(int i = 0; i<n; i++)
        cin >> a[i];
    ll maxs=LLONG_MIN, curs=0;
    for(int i=0; i<n; i++)
    {
        curs=max(1LL * a[i], curs + a[i]);
        maxs=max(maxs, curs);
    }
    cout << maxs<< '\n';
    return 0;
}
