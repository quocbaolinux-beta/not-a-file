#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("sopp.inp", "r", stdin);
    freopen("sopp.out", "w", stdout);
    int l, r;
    cin >> l >> r;

    int res = 0;
    vector<int> div(r + 1, 0);
    for (int i = 1; i <= r; ++i)
    {
        for (int j = i; j <= r; j += i)
            div[j] += i;

        res += (i >= l) && (div[i] > 2 * i);
    }

    cout << res;
    return 0;
}
