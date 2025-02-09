#include <bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

string s, res;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("cau1.inp", "r", stdin);
    freopen("cau1.out", "w", stdout);
    cin >> s;
    for (char chr : s) {
        if (chr >= 'A' && chr <= 'Z') {
            if (!res.empty()) res.pb('_');
            res.pb(chr - 'A' + 'a');
        } else
            res.pb(chr);
    }

    cout << res;

    return 0;
}
