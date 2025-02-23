#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("veryhard.inp", "r", stdin);
    freopen("veryhard.out", "w", stdout);
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        long long s = static_cast<long long>(sqrt(x));
        cout << ((s * s == x) ? 1 : 0) << "\n";
    }
    return 0;
}
