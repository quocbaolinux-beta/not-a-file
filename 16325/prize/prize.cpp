#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k, x, sum = 0;
    cin >> n >> k;
    vector<int> a(n);

    for (int &x : a) cin >> x;
    sort(a.rbegin(), a.rend());

    for (int i = 0; i < n; i++)
        if (sum + k > a[i]) sum += a[i];

    cout << sum;
}
