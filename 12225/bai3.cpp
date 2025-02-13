#include <bits/stdc++.h>
using namespace std;
int n, k, dem=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("bai3.inp", "r", stdin);
    freopen("bai3.out", "w", stdout);
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] + a[j] == k) {
                dem++;
            }
        }
    }
    cout << dem;
    return 0;
}