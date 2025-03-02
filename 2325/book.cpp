#include <bits/stdc++.h>

using namespace std;
long long n, p;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("book.inp", "r", stdin);
    freopen("book.out", "w", stdout);
    cin >> n >> p;
    long long ffs = p / 2;
    long long ffe = (n - p + 1) / 2;
    cout << min({ffs, ffe});
    return 0;
}