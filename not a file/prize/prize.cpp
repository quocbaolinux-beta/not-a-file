#include <bits/stdc++.h>
using namespace std;
int n, m;
int main() {
    freopen("PRIZE.INP", "r", stdin);
    freopen("PRIZE.OUT", "w", stdout);
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int tong = 0;
    for (int i = 0; i < m; i++) {
        tong+= a[b[i] - 1];
    }
    cout << tong << endl;
    return 0;
}
