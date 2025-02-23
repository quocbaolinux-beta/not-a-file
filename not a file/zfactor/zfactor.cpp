#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> sieve_min_prime(int limit) {
    vector<int> min_prime(limit + 1);
    for (int i = 0; i <= limit; i++) min_prime[i] = i;
    for (int i = 2; i * i <= limit; i++) {
        if (min_prime[i] == i) {
            for (int j = i * i; j <= limit; j += i) {
                if (min_prime[j] == j) {
                    min_prime[j] = i;
                }
            }
        }
    }
    return min_prime;
}
int main() {
    freopen("ZFACTOR.INP", "r", stdin);
    freopen("ZFACTOR.OUT", "w", stdout);

    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max_value = *max_element(arr.begin(), arr.end());
    vector<int> min_prime = sieve_min_prime(max_value);

    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (min_prime[arr[i]] == k) {
            dem++;
        }
    }
    cout << dem << endl;
    return 0;
}
