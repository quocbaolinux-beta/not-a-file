#include <bits/stdc++.h>
using namespace std;
long long n, dem;
void solve()
{
    dem=0;
    for(int i=1; i<=n; i++)
        if(n%i==0)
            dem++;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SODEP.INP", "r", stdin);
    freopen("SODEP.OUT", "w", stdout);
    cin >> n;
    solve();
    cout << dem;
    return 0;
}
