#include <bits/stdc++.h>
using namespace std;
long long n, a[1000001],tong,i;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("SUMARR.INP", "r", stdin);
    freopen("SUMARR.OUT", "w", stdout);



    cin >> n;
    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
    }

    tong = 0;
    for (long long i = 1; i <= n; i++) {
        tong += a[i];
    }

    cout << tong;

    return 0;
}
