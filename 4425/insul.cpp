#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    int ins = 0;
    
    for (int i = 0; i < n; i++) {
        ins += a[i]; 
        
        if (i > 0) {
            ins += max(0LL, a[i] - a[i-1]); 
        }
    }
    
    cout << ins;
    
    return 0;
}