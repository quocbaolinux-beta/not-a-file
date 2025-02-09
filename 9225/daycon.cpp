#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("daycon.inp", "r", stdin);
    //freopen("daycon.out", "w", stdout);
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> dp(n, 1);
    int result = 1;
    for (int i=1; i<=n; i++) {
        dp[i] = 0;
        for (int j=0; j<i; j++) if (a[j] < a[i]) {
            dp[i] = max(dp[i], dp[j] + 1);
        }
        result = max(result, dp[i]);
    }
    cout << result;
    return 0;
}