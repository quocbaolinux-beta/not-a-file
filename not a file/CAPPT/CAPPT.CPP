#include <bits/stdc++.h>
using namespace std;
long long n, k;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("CAPPT.INP", "r", stdin);
    //freopen("CAPPT.OUT", "w", stdout);
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> cm;
    long long res = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        res += cm[k - a[i]];
        cm[a[i]]++;
    }
    cout << res << endl;
    return 0;
}
