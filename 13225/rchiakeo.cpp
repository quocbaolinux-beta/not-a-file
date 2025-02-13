#include <bits/stdc++.h>
using namespace std;
int n, m, res=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("rchiakeo.inp", "r", stdin);
    //freopen("rchiakeo.out", "w", stdout);
    cin >> m >> n;
    vector<int> a(n);
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    sort(a.rbegin(), a.rend(), greater<int>());
    for(int i = 1; i <= m && i<=n; ++i) {
        res += a[i] * a[i];
    }
    cout << res;
    return 0;
}