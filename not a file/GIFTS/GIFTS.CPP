#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("GIFTS.INP", "r", stdin);
    freopen("GIFTS.OUT", "w", stdout);
    cin >> n;
    vector<int> diff(n);
    long long total = 0;
    for (int i = 0, a, b; i < n; ++i) {
        cin >> a >> b;
        d[i] = a - b;
        t += b;
    }
    sort(d.rbegin(), d.rend());

    for (int i = 0; i < n / 2; ++i) {
        t += d[i];
    }
    cout << t << endl;
    return 0;
}
