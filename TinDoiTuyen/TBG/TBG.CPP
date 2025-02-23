#include <bits/stdc++.h>
using namespace std;
int x, y, z;
int doi(int X, int Y, int Z) {
    int nu = Z * (X - Y);
    return (nu + Y - 1) / Y;
}
void solve()
{
    cin >> x >> y >> z;
    int result = doi(x, y, z);
    cout << result << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("TBG.INP", "r", stdin);
    freopen("TBG.OUT", "w", stdout);
    solve();
    return 0;
}
