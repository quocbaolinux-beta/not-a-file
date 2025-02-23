#include <bits/stdc++.h>
using namespace std;
int daydainhat(const vector<int> &a) {
    int n = a.size();

    if (n == 0) return 0;

    vector<int> dp(n, 1);

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (a[i] > a[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("SEQ123.INP", "r", stdin);
    freopen("SEQ123.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int kq = daydainhat(arr);
    cout << kq;
    return 0;
}
