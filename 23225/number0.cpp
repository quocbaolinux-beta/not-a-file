#include <bits/stdc++.h>
using namespace std;
long long tancung(long long n) {
    long long count = 0;
    for (long long i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    return count;
}
long long n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("number0.inp", "r", stdin);
    freopen("number0.out", "w", stdout);
    cin >> n;
    cout << tancung(n);
    return 0;
}