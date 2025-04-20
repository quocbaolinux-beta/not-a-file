#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n+1);
    vector<long long> dp(n+1);

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        dp[i] = a[i]; 
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = i+1; j <= n; ++j) {
            if (a[j] >= a[i]) {
                dp[j] = max(dp[j], dp[i] + a[j]);
            }
        }
    }

    cout << *max_element(dp.begin()+1, dp.end()) << endl;
    return 0;
}
