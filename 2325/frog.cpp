#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("FROG.INP", "r", stdin);
    freopen("FROG.OUT", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }

    vector<int> cost(n, INT_MAX);
    cost[0] = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j <= min(i + k, n - 1); ++j) {
            cost[j] = min(cost[j], cost[i] + abs(h[j] - h[i]));
        }
    }

    cout << cost[n - 1] << endl;

    return 0;
}