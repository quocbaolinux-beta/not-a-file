#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SALIBABA.INP", "r", stdin);
    freopen("SALIBABA.OUT", "w", stdout);
    cin >> n;
    map<int, int> f;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        f[a]++;
    }
    int tn = 0;
    for (auto &entry : f) {
        tn += entry.second - 1;
    }
    cout << tn << endl;

    return 0;
}
