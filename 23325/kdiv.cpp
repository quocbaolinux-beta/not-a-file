#include <bits/stdc++.h>
#define int long long
using namespace std;
int lcm(int a, int b) {
    return (a * b) / __gcd(a, b);
}

int32_t main() {
    int a, b, k;
    freopen("KDIV.INP", "r", stdin);
    freopen("KDIV.OUT", "w", stdout);
    cin >> a >> b >> k;
    int l = lcm(a, b);
    int result = k * l;
    cout << result;
    return 0;
}