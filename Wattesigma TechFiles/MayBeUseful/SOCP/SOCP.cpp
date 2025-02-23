#include <bits/stdc++.h>
using namespace std;
long long n, kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SOCP.INP", "r", stdin);
    freopen("SOCP.OUT", "w", stdout);
    cin >> n;
    kq = sqrt(n);
    if (kq*kq==n)
        cout << 1;
    else
        cout << 0;
    return 0;
}
