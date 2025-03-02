#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SHOP.INP", "r", stdin); 
    freopen("SHOP.OUT", "w", stdout); 

    int n, m;
    cin >> n >> m;

    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }

    int count = 0;
    for (int i = 1; i < (1 << n); ++i) { 
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            if ((i >> j) & 1) { 
                sum += coins[j];
            }
        }
        if (sum == m) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}