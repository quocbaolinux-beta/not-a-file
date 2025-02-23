#include <bits/stdc++.h>
using namespace std;
long long n, kq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("bai1.inp", "r", stdin);
    //freopen("bai1.out", "w", stdout);
    cin >> n;
    if (n <= 50)
        cout << n * 1800 << endl;
    else if (n <= 100)
        cout << 50 * 1800 + (n - 50) * 1900 << endl;
    else if (n <= 200)
        cout << 50 * 1800 + 50 * 1900 + (n - 100) * 2100 << endl;
    else
        cout << 50 * 1800 + 50 * 1900 + 100 * 2100 + (n - 200) * 2200 << endl;
    return 0;
}
