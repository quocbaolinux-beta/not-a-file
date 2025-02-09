#include <bits/stdc++.h>
using namespace std;
int n;
int hoanvi(int n) {
    int res = 0;
    int o=n;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == o;
}
bool isprime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("palprime.inp", "r", stdin);
    freopen("palprime.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (hoanvi(i) && isprime(i)) {
            cout << i << endl;
        }
    }
    return 0;
}