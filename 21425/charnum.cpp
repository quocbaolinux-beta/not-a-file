#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long res = 0;
    long long d = 1;
    long long s = 1;

    while (s * 10 <= n) {
        res += (s * 9) * d;
        s *= 10;
        d++;
    }

    res += (n - s + 1) * d;

    cout << res << '\n';
    return 0;
}
