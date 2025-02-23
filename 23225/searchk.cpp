#include <bits/stdc++.h>
using namespace std;
long long largestK(long long n, int m) {
    long long count = 0;
    long long power = m;
    while (power <= n) {
        count += n / power;
        if (power > n / m) break; 
        power *= m;
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("searchk.inp", "r", stdin);
    freopen("searchk.out", "w", stdout);
    long long n;
    int m;
    cin >> n >> m;

    long long result = largestK(n, m);
    cout << result;
    return 0;
}
