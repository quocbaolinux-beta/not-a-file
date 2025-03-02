#include <bits/stdc++.h>

using namespace std;

vector<int> primeFactors(int n) {
    vector<int> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
    sort(factors.begin(), factors.end(), greater<int>());
    return factors;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("PASS.INP", "r", stdin);
    freopen("PASS.OUT", "w", stdout);

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int n;
        cin >> n;
        vector<int> factors = primeFactors(n);
        for (int j = 0; j < factors.size(); ++j) {
            cout << factors[j];
            if (j < factors.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}