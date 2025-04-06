#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, S;
    cin >> n >> S;
    
    long long x, y;
    cin >> x >> y;
    
    vector<long long> pts(n);
    for (int i = 0; i < n; i++) {
        cin >> pts[i];
    }
    
    sort(pts.begin(), pts.end());
    
    if (y == 0) {
        cout << 0;
        return 0;
    }
    
    long long count = 0;
    long long gttd = abs(y);
    
    for (int i = 0; i < n; i++) {
        long long mdis = 2 * S / gttd;
        if (2 * S % gttd != 0) mdis++;
        
        long long ts = pts[i] + mdis;
        
        auto it = lower_bound(pts.begin() + i + 1, pts.end(), ts);
        count += pts.end() - it;
    }
    
    cout << count;
    
    return 0;
}