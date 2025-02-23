#include <bits/stdc++.h>
using namespace std;
int n, k;
string a;
void solve()
{
    cin >> n >> k;
    cin >> a;
    sort(a.begin(), a.end());
    string str[100] = {};
    for (int i = 0; i < n; ++i) {
        str[i % k] += a[i];
    }

    string res = str[0];
    for (int i = 1; i < k; ++i) {
        if (str[i] > res) {
            res = str[i];
        }
    }
    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("STRGAME.INP", "r", stdin);
    freopen("STRGAME.OUT", "w", stdout);
    solve();
    return 0;
}
