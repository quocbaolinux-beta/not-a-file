#include <bits/stdc++.h>
#define int long long
using namespace std;
int t=0, s=0, n;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("doidau.inp", "r", stdin);
    freopen("doidau.out", "w", stdout);
    while (cin >> n && n != 0) {
        if (t != 0 && (n > 0) != (t > 0)) {
            s++;
        }
        t = n;
    }

    cout << s;
    return 0;
}
