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
    file("subsum");

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    map<int, int> cnt;
    cnt[0] = 1;
    int sum = 0, res = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
        res += cnt[sum - x];
        cnt[sum]++;
    }

    cout << res << endl;
    return 0;
}
