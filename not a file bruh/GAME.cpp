#include <bits/stdc++.h>
using namespace std;
int N, K, h[100001], dp[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("GAME.INP", "r", stdin);
    freopen("GAME.OUT", "w", stdout);
    cin >> N >> K;

    for (int i = 0; i < N; ++i) {
        cin >> h[i];
    }

    dp[0] = 0; 

    for(int i=0; i<N; ++i) {
        for(int j=1;j<=K;++j) {
            if (i+j<N) {
                dp[i+j] = min(dp[i+j], dp[i] + abs(h[i]-h[i+j]));
            }
        }
    }
    cout << dp[N-1];
    return 0;
}
