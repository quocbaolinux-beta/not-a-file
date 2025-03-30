#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("TICK.INP", "r", stdin);
    freopen("TICK.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<int> t(n+1), r(n); 
    for (int i = 1; i <= n; ++i) cin >> t[i];
    for (int i = 1; i < n; ++i) cin >> r[i];

    vector<int> dp(n+1, INT_MAX);
    dp[0] = 0;
    dp[1] = t[1];
    for (int i = 2; i <= n; ++i) {
        dp[i] = min(dp[i-1] + t[i], dp[i-2] + r[i-1]);
    }

    cout << dp[n] << endl; 
    return 0;
}