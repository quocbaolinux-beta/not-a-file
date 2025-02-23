#include <bits/stdc++.h>
using namespace std;
long long factorial(long long n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
long long n;
int demuocnt(long long n) {
    int count = 0;
    for (long long i = 2; i <= n; ++i) {
        if (n % i == 0) {
            ++count;
        }
    }
    return count;
}
long long ft;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("countdi4.inp", "r", stdin);
    freopen("countdi4.out", "w", stdout);
    cin >> n;
    ft=factorial(n);
    cout << demuocnt(ft);
    return 0;
}