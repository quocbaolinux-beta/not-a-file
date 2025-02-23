#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    freopen("TRIANGLE.INP", "r", stdin);
    freopen("TRIANGLE.OUT", "w", stdout);

    long long a, b, c;
    cin >> a >> b >> c;

    long long x = min({a, b, c});
    long long z = max({a, b, c});
    long long y = a + b + c - x - z;

    if (x + y <= z) {
        cout << 0 << endl;
        return 0;
    }

    long long x2 = x * x, y2 = y * y, z2 = z * z;

    if (x2 + y2 > z2) {
        cout << 1 << endl;
    } else if (x2 + y2 == z2) {
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }

    return 0;
}
