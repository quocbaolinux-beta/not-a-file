#include <bits/stdc++.h>
using namespace std;

struct Artist {
    int start;
    int end;
    int cost;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("VANNGHE.INP", "r", stdin);
    //freopen("VANNGHE.OUT", "w", stdout);
    int n, m;
    cin >> n >> m;

    vector<Artist> artists(m);
    for (int i = 0; i < m; ++i) {
        cin >> artists[i].start >> artists[i].end >> artists[i].cost;
    }

    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        dp[i] = dp[i - 1]; 

        for (int j = 0; j < m; ++j) {
            if (artists[j].start <= i - 1 && artists[j].end >= i) {
                if (dp[artists[j].start] != INT_MAX) {
                    dp[i] = min(dp[i], dp[artists[j].start] + artists[j].cost);
                }
            }
        }
    }

    if (dp[n] == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << dp[n] << endl;
    }

    return 0;
}