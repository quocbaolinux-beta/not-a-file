#include <bits/stdc++.h>
using namespace std;

const int N = 1003;
int n, k, A[N];
long long dp[N], res;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("raladdin.inp", "r", stdin);
    freopen("raladdin.out", "w", stdout);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
        dp[i] = A[i];
        
        for (int j = 1; j < i; j++) {
            if (A[i] > A[j] && A[i] <= A[j]+k) {
                dp[i] = max(dp[i], dp[j] + A[i]);
            }
        }
        
        res = max(res, dp[i]);
    }
    
    cout << res;

    return 0;
}
