#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n) {
    string s = to_string(n);
    string reversed_s = string(s.rbegin(), s.rend());
    return s == reversed_s;
}

set<int> primeFactors(int n) {
    set<int> factors;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            factors.insert(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.insert(n);
    }
    return factors;
}
int countBeautifulNumbers(int a, int b) {
    int count = 0;
    for (int num = a; num <= b; num++) {
        if (isPalindrome(num)) {
            set<int> factors = primeFactors(num);
            if (factors.size() >= 3) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SDXDEP.INP", "r", stdin);
    freopen("SDXDEP.OUT", "w", stdout);
    int a, b;
    cin >> a >> b;
    int result = countBeautifulNumbers(a, b);
    cout << result;
    return 0;
}
