#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, dem=0;
void solve()
{
    cin >> n;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            dem++;
            if(n/i!=i)
                dem++;
        }
    }
    cout << dem;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("bai1.inp", "r", stdin);
    freopen("bai1.out", "w", stdout);
    solve();
    return 0;
}
