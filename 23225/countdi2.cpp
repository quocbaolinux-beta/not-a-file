#include <bits/stdc++.h>
using namespace std;

int countDivisors(long long n) {
    int count = 0;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (i != n / i) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    freopen("COUNTDI2.INP", "r", stdin);
    freopen("COUNTDI2.OUT", "w", stdout);

    long long n;
    while (cin >> n) {
        int divisorCount = countDivisors(n);
        cout << divisorCount << endl;
    }

    return 0;
}
