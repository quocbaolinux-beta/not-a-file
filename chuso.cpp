#include <bits/stdc++.h>
using namespace std;
long long n, res;
long long tongcs(long long a)
{
    long long tong=0;
    while (n != 0) {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("chuso.inp", "r", stdin);
    freopen("chuso.out", "w", stdout);
    cin >> n;
    res = tongcs(n);
    cout << res;
    return 0;
}