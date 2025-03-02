#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("MOVE.INP", "r", stdin);
    freopen("MOVE.OUT", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (weights[i] + weights[j] <= k) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}