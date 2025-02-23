#include <bits/stdc++.h>
using namespace std;
long long n, c[1000001], i, k, kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("chaink.inp", "r", stdin);
    freopen("chaink.out", "w", stdout);
    cin >> n >> k;
    for(i=1; i<=n; i++)
        cin >> c[i];
    // hey, what's up?
    kq=0;
    for(i=1; i<=n; i++)
    {
        kq=(kq+c[i]%k)%k;
    }
    cout << kq;
}
