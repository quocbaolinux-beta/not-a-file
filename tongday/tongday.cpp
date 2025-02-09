#include <bits/stdc++.h>
using namespace std;
long long n, sum=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("tongday.inp", "r", stdin);
    freopen("tongday.out", "w", stdout);
    cin >> n;
    if (n % 2 == 0) {
        cout << n / 2;
    }
    else {
        cout << (n-1) / 2 - n;
    }
    return 0;
}
