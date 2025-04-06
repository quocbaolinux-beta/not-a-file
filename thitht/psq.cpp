#include <bits/stdc++.h>
#define vct vector
using namespace std;

bool isprime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int lnps(const vct<vct<int>>& mt) {
    int m = mt.size();
    int n = mt[0].size();
    vct<vct<int>> dp(m, vct<int>(n, 0));
    int mxs = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (isprime(mt[i][j])) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
                }
                mxs = max(mxs, dp[i][j]);
            }
        }
    }

    return mxs * mxs;
}

int main() {
    int m, n;
    cin >> m >> n; 
    vct<vct<int>> mt(m, vct<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mt[i][j];
        }
    }
    cout << lnps(mt) << endl;
    return 0;
}