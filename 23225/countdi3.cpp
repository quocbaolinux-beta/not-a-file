#include <bits/stdc++.h>
using namespace std;
long long n;
bool isprime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
long long demuocnt(long long n) {
    long long count = 0;
    for (long long i = 2; i <= sqrt(n); ++i) {
        while (n % i == 0) {
            if (isprime(i)) ++count;
            n /= i;
        }
    }
    if (n > 1 && isprime(n)) ++count;
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("countdi3.inp", "r", stdin);
    freopen("countdi3.out", "w", stdout);
    cin >> n;
    cout << demuocnt(n);
    return 0;
}