#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("doco.inp", "r", stdin);
    freopen("doco.out", "w", stdout);
    int n;
    cin >> n;

    int max_age = 1; 
    for (int i = 1; i <= n; ++i) {
        int ai;
        cin >> ai;
        max_age = max(max_age, ai + (n - i + 1)); 
    }
    cout << max_age << endl;
    return 0;
}
