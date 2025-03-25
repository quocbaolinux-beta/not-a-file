#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5;
int n, q, A[N+1];
int findPos(int x) {
    int l=1, r = n;
    while (l <= r) {
        int mid = (l+r) / 2;
        if (A[mid] == x) return mid;
        else if (A[mid] < x) l = mid + 1;
        else if (A[mid] > x) r = mid - 1;
    }
    return -1;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("easiest.inp", "r", stdin);
    freopen("easiest.out", "w", stdout);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> A[i];
    while (q--) {
    int x;
        cin >> x; cout << findPos(x) << "\n";
    }
    return 0;
}
