#include <bits/stdc++.h>
using namespace std;

int n, x, ans;
unordered_set<int> s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("DEMSODN.INP", "r", stdin);
    freopen("DEMSODN.OUT", "w", stdout);
    
    cin >> n;
    while (cin >> x) s.insert(x);
    
    for (int i = 1; i <= n; i++)
        if (!s.count(i)) ans++;
    
    cout << ans << "\n";
    return 0;
}
