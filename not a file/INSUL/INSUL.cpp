#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("INSUL.INP", "r", stdin);
    freopen("INSUL.OUT", "w", stdout);
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long t = 0;
    for (int i = 0; i < n; ++i) {
        t += a[i];
    }
    for (int i = 0; i < n / 2; ++i) {
        t += max(0, a[n - i - 1] - a[i]);
    }
    cout << t << endl;
    return 0;
}
