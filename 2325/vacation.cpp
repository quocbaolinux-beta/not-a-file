#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("VACATION.INP", "r", stdin);
    freopen("VACATION.OUT", "w", stdout);

    int n;
    cin >> n;

    vector<vector<int>> h(n, vector<int>(3));
    for (int i = 0; i < n; ++i) {
        cin >> h[i][0] >> h[i][1] >> h[i][2];
    }

    vector<vector<int>> d(n, vector<int>(3, 0));
    d[0][0] = h[0][0];
    d[0][1] = h[0][1];
    d[0][2] = h[0][2];

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                if (j != k) {
                    d[i][j] = max(d[i][j], d[i - 1][k] + h[i][j]);
                }
            }
        }
    }

    cout << max({d[n - 1][0], d[n - 1][1], d[n - 1][2]}) << endl;

    return 0;
}