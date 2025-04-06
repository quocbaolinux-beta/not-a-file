#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define pi pair<int, int>
#define fi first
#define se second
using namespace std;

int32_t main() {
    
    int n;
    cin >> n;
    
    vector<pi> gi(n);
    
    for (int i = 0; i < n; i++) {
        cin >> gi[i].fi >> gi[i].se;
    }
    
    sort(all(gi), [](pi x, pi y) {
        return (x.fi - x.se) > (y.first - y.se);
    });
    
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (i < n/2) {
            total += gi[i].fi;
        } else {
            total += gi[i].se;
        }
    }
    
    cout << total;
    
    return 0;
}