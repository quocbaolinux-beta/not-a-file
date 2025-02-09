#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int n, A[N+1];
long long dp[N+1];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("water.inp", "r", stdin);
    freopen("water.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> A[i];
    }

	dp[1] = A[1];
	for (int i = 2; i <= n; i++)  {
		dp[i] = max(dp[i-1], dp[i-2] + A[i]);
    }

	cout << dp[n];

	return 0;
}
