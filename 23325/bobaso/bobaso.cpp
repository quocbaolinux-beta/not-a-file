#include <bits/stdc++.h>
#define int long long
using namespace std;
bool isprime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("bobaso.inp", "r", stdin);
    freopen("bobaso.out", "w", stdout);
    int k;
    cin >> k;

    int dem = 0;


    for (int x = 2; x <= k; x++) {
        if (!isprime(x)) continue;
        for (int y = x; y <= k; y++) {
            if (!isprime(y)) continue;
            for (int z = y; z <= k; z++) {
                if (!isprime(z)) continue;
                if (x + y + z == k) {
                    dem++;
                }
            }
        }
    }

    cout << dem;
    return 0;
}
