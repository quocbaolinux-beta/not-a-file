#include <bits/stdc++.h>
using namespace std;
long long n, m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("clock.inp", "r", stdin);
    freopen("clock.out", "w", stdout);
    cin >> m >> n;
    cout << (m+n)%60;
    return 0;
}
