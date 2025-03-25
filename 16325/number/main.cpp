#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    freopen("number.inp", "r", stdin);
    freopen("number.out","w", stdout);
    int n;
    cin >> n;

    long long sum = 0;
    if (n % 2 == 0) {
        for (int i = 2; i <= n; i += 2) {
            sum += 1LL * i * i;
        }
    } else {
        for (int i = 1; i <= n; i += 2) {
            sum += 1LL * i * i;
        }
    }

    cout << sum << endl;
    return 0;
}
