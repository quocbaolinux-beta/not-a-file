#include <bits/stdc++.h>
#define int long long
using namespace std;
long long countPrimeFactorsInFactorial(long long n, int p) {
    long long count = 0;
    while (n > 0) {
        n /= p;
        count += n;
    }
    return count;
}
int32_t main() {
    freopen("FACTGAME.INP", "r", stdin); 
    freopen("FACTGAME.OUT", "w", stdout); 

    long long n, t;
    cin >> n >> t;

    vector<int> k(t);
    for (int i = 0; i < t; ++i) {
        cin >> k[i];
    }

    for (int i = 0; i < t; ++i) {
        int ki = k[i];
        int result = 0;
        
        vector<pair<int, int>> primeFactors;
        int tempKi = ki;
        for (int p = 2; p * p <= tempKi; ++p) {
            if (tempKi % p == 0) {
                int count = 0;
                while (tempKi % p == 0) {
                    tempKi /= p;
                    count++;
                }
                primeFactors.push_back({p, count});
            }
        }
        if (tempKi > 1) {
            primeFactors.push_back({tempKi, 1});
        }
        
        // Tính số mũ z lớn nhất
        if (primeFactors.empty()) {
            result = 0;
        } else {
            int minExponent = LLONG_MAX;
            for (auto& factor : primeFactors) {
                int p = factor.first;
                int countPInKi = factor.second;
                long long countPInNFact = countPrimeFactorsInFactorial(n, p);
                minExponent = min(minExponent, (int)(countPInNFact / countPInKi));
            }
            result = minExponent;
        }
        
        cout << result << (i == t - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}