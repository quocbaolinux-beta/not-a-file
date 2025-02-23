#include <bits/stdc++.h>

using namespace std;

long long n;

long long isprime(long long n) {
    if (n < 2) return 0;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("PRIME.inp", "r", stdin);
    freopen("PRIME.out", "w", stdout);

    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
        cin >> a[i];

    long long dem = 0;

    for (long long i = 0; i < n; i++) {
        if (isprime(a[i])) {
            dem++;
        }
    }

    cout << dem;

    return 0;
}
