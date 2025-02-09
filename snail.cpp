#include <bits/stdc++.h>
using namespace std;
long long a, b, v, n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("snail.inp", "r", stdin);
    freopen("snail.out", "w", stdout);
    cin >> a >> b >> v;
    n = (v - b - 1) / (a - b) + 1;
    cout << n;
    return 0;
}