#include <bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define file(n) freopen(n".inp", "r", stdin); freopen(n".out", "w", stdout);
int rz(int n) {
    int res = 0;
    int mul = 1;

    while (n > 0) {
        int d = n % 10;
        if (d != 0) {
            res += d * mul;
            mul *= 10;
        }
        n /= 10;
    }

    return res;
}
int tc(int a, int n) {
    if (n == 0) return 1; 
    a = a % 10; 
    if (a == 0) return 0; 
    int res = 1;
    for (int i = 0; i < n; ++i) {
        res = (res * a) % 10;
    }
    return res;
}
int a, n;
int32_t main(){
    io;
    file("bai2");
    cin >> n >> a;
    cout << rz(n) << '\n' << tc(a, n);
    return 0;
}