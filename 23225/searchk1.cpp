#include <bits/stdc++.h>
using namespace std;

long long countPrimeFactors(long long n, long long p) {
    long long count = 0;
    for (long long power = p; power <= n; power *= p) {
        count += n / power;
    }
    return count;
}

long long findK(long long n, long long m) {
    long long k = LLONG_MAX;
    for (long long i = 2; i * i <= m; i++) {
        if (m % i == 0) {
            long long count = 0;
            while (m % i == 0) {
                m /= i;
                count++;
            }
            k = min(k, countPrimeFactors(n, i) / count);
        }
    }
    if (m > 1) {
        k = min(k, countPrimeFactors(n, m));
    }
    return k;
}

int main() {
    freopen("SEARCHK1.INP", "r", stdin);
    freopen("SEARCHK1.OUT", "w", stdout);

    long long n, m;
    cin >> n >> m;
    cout << findK(n, m) << endl;

    return 0;
}
