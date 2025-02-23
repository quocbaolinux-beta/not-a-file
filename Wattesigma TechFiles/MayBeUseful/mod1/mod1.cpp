#include <bits/stdc++.h>
using namespace std;
long long n, i, k, a[1000001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("mod1.inp", "r", stdin);
    freopen("mod1.out", "w", stdout);
    cin >> n >> k;
    long long kq=1;
    for(i=1; i<=n; i++)
        kq *= i;
    cout << kq;
}
