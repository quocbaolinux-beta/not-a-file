#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    freopen("gifts.inp", "r", stdin);
    freopen("gifts.out", "w", stdout);

    int x, y;
    cin >> x >> y;

    int res = 0;
    for (int n = 1; n * n <= x + y; n++) {
        if (x % n == 0 && y % n == 0) res++;
        if (x % (x / n) == 0 && y % (x / n) == 0 && n != x / n) res++;
    }

    cout << res;
    return 0;
}
