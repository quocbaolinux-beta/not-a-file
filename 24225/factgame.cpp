#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> getPrimeFactors(int x) {
    vector<pair<int, int>> factors;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            int cnt = 0;
            while (x % i == 0) {
                x /= i;
                ++cnt;
            }
            factors.emplace_back(i, cnt);
        }
    }
    if (x > 1) {
        factors.emplace_back(x, 1);
    }
    return factors;
}
int countPrimeInFactorial(int n, int p) {
    int count = 0;
    while (n) {
        n /= p;
        count += n;
    }
    return count;
}
long long n, t;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("FACTGAME.INP", "r", stdin);
    freopen("FACTGAME.OUT", "w", stdout);
    cin >> n >> t;
    vector<int> kt(t);
    for (int i = 0; i < t; ++i) {
        cin >> kt[i];
    }

    for (int i = 0; i < t; ++i) {
        int k = kt[i];
        auto factors = getPrimeFactors(k);
        int z = INT_MAX;
        for (auto& [p, cnt] : factors) {
            int total = countPrimeInFactorial(n, p);
            z = min(z, total / (2 * cnt));
        }
        cout << z << " ";
    }

    return 0;
}