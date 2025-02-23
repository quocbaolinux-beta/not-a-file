#include <bits/stdc++.h>
using namespace std;
int n, k, a[10001], dp[10001], maxg=1;
void solve()
{
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    for (int i = 0; i <= n; i++) {
        dp[i] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (a[i] > a[j] + k) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    maxg = *max_element(dp + 1, dp + n + 1);
    cout << maxg << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("GIFT.INP", "r", stdin);
    freopen("GIFT.OUT", "w", stdout);
    solve();
    return 0;
}