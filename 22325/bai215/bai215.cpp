#include <bits/stdc++.h>
#define int long long

using namespace std;

int a, b, n, def;

int demuoc(int n)
{
    int dem=0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0)
        {
            dem++;
            if(n/i!=i)
            {
                dem++;
            }
        }
    }
    return dem;
}

int lcm(int a, int b)
{
    return (a*b)/__gcd(a, b);
}

void io(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("bai2.inp", "r", stdin);
    freopen("bai2.out", "w", stdout);
}

void solve()
{
    cin >> a >> b >> n;
    if(demuoc(n)%2==0)
        def=0;
    else
        def=1;
    cout << lcm(a, b) << "\n" << def;
}

int32_t main()
{
    io();
    solve();
    return 0;
}
