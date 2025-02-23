#include <bits/stdc++.h>

using namespace std;
long long n,t[2001], r[2001], dp[2001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("TICK.INP","r",stdin);
    freopen("TICK.OUT","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> t[i];
    }
    for (int i = 1; i < n; ++i) {
        cin >> r[i];
    }

    dp[1] = t[1];
    dp[2] = min(t[1] + t[2], r[1]);

    for (int i = 3; i <= n; ++i) {
        dp[i] = min(dp[i-1] + t[i], dp[i-2] + r[i-1]);
    }

    cout << dp[n] << endl;

    return 0;
}
