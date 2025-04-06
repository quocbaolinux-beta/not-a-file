#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;
    
    if (n == 1) {
        cout << 1;
        return 0;
    }
    vector<long long> dp(n + 1, 0);
    dp[0] = 1; 
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= min(i, k); j++) {
            dp[i] += dp[i - j];
        }
    }
    
    cout << dp[n];
    
    return 0;
}