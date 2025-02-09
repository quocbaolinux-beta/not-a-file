#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CAU2.INP", "r", stdin);
    freopen("CAU2.OUT", "w", stdout);
    
    int n;
    cin >> n;
    
    long long count = 0;
    for (int c = 1; c <= n / 2; ++c) {
        count += (n - 2 * c);
    }
    
    cout << count << endl;
    
    return 0;
}