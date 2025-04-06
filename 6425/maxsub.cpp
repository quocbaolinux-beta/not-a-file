#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define file(name) {freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout);}

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    file("maxsub");

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int ms = a[0], cs = a[0];
    for (int i = 1; i < n; ++i) {
        cs = max(a[i], cs + a[i]);
        ms = max(ms, cs);
    }

    cout << ms << endl;
    return 0;
}
