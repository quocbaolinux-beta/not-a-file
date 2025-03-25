#include <bits/stdc++.h>
#define int long long
using namespace std;
int h, d1, d2, d3, dem=0;
void io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen(".inp", "r", stdin);
    //freopen(".out", "w", stdout);
}
int32_t main()
{
    io();
    cin >> h >> d1 >> d2 >> d3;
    if(h<d1) dem++;
    if(h<d2) dem++;
    if(h<d3) dem++;
    cout << dem << '\n';
    return 0;
}
