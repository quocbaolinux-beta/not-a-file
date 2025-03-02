#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("DRAGON.INP", "r", stdin);
    freopen("DRAGON.OUT", "w", stdout);

    int n, k, l;
    cin >> n >> k >> l;

    vector<bool> clipped(n + 1, false);
    vector<bool> cut(n + 1, false);

    for (int i = k; i <= n; i += k) {
        clipped[i] = true;
    }

    for (int i = l; i <= n; i += l) {
        cut[i] = true;
    }

    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (clipped[i] || cut[i]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}