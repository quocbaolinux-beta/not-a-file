#include <bits/stdc++.h>
using namespace std;
long long p;
long double a, maxs;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("hinhvuong.inp", "r", stdin);
    freopen("hinhvuong.out", "w", stdout);
    cin >> p;
    a=p/4;
    maxs=pow(a, 2);
    cout << fixed << setprecision(2) << maxs;
    return 0;
}
