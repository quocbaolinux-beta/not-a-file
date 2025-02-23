#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("NEUTRAL.INP", "r", stdin);
    freopen("NEUTRAL.OUT", "w", stdout);
    int n,m;
    cin >>n >>m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int d = 0;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] * b[j] <= 0) {
                d++;
            }
        }
    }

    cout << d << endl;
    return 0;
}
