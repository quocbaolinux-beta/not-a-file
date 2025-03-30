#include <bits/stdc++.h>
#define read(name) {freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);}
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define pb push_back
int n, w, mp;
vector<int> p;

void sieve(int n) {
    vector<bool> s(n + 1, 1);
    for (int i = 2; i <= n; i++) {
        if (s[i]) {
            p.push_back(i);
            for (int j = i * 2; j <= n; j += i) s[j] = 0;
        }
    }
}

void solve(int i, int sum, int pr) {
    if (sum == n) {
        w++;
        mp = max(mp, pr);
        return;
    }
    for (int j = i; j < p.size() && sum + p[j] <= n; j++) {
        solve(j + 1, sum + p[j], pr * p[j]);
    }
}

main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    read("PHANTICH");
    cin >> n;
    sieve(n);
    solve(0, 0, 1);
    
    cout << (w ? w : 0) << "\n";
    if (w) cout << mp << "\n";
    
    return 0;
}
