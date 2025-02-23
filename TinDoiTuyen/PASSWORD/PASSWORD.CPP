#include <bits/stdc++.h>

using namespace std;


long long tongcs(long long n) {
    long long t = 0;
    while (n > 0) {
        t = t + (n % 10);
        n = n / 10;
    }
    return t;
}


long long isprime(long long n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (long long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    freopen("password.inp", "r", stdin);
    freopen("password.out", "w", stdout);

    long long l, r;
    cin >> l >> r;


    for (long long i = l; i <= r; i++) {

        if (isprime(i) && isprime(tongcs(i))) {
            cout << i << " ";
        }
    }

    return 0;
}
