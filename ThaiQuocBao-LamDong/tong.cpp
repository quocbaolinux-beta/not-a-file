#include <bits/stdc++.h>
using namespace std;
long long n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("tong.inp", "r", stdin);
    freopen("tong.out", "w", stdout);
    cin >> n;

    long long sum = (n * (n - 1) * (n + 1) * (n + 2)) / 4;

    cout << sum << endl;

    return 0;
}