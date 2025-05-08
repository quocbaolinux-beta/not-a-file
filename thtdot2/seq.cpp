#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<int> a(m), b(n);
    for (int i = 0; i < m; ++i) cin >> a[i];
    for (int j = 0; j < n; ++j) cin >> b[j];

    vector<vector<int>> dp1(m + 1, vector<int>(n + 1, 0)); // condition 1: a_i >= b_j, a_i+1 <= b_j+1, ...
    vector<vector<int>> dp2(m + 1, vector<int>(n + 1, 0)); // condition 2: a_i <= b_j, a_i+1 >= b_j+1, ...
    int result = 0;

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            dp1[i][j] = 1;
            dp2[i][j] = 1;
            for (int k = 1; k < i; ++k) {
                for (int l = 1; l < j; ++l) {
                    if (a[i - 1] >= b[j - 1] && a[k - 1] <= b[l - 1]) {
                        dp1[i][j] = max(dp1[i][j], dp2[k][l] + 1);
                    }
                    if (a[i - 1] <= b[j - 1] && a[k - 1] >= b[l - 1]) {
                        dp2[i][j] = max(dp2[i][j], dp1[k][l] + 1);
                    }
                }
            }
            result = max(result, max(dp1[i][j], dp2[i][j]));
        }
    }

    cout << result << endl;

    return 0;
}