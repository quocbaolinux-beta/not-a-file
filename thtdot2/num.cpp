#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    vector<vector<bool>> d(n, vector<bool>(n, 0));
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(a[i]%a[j]==0 || a[j]%a[i]==0) {
                d[i][j] = d[j][i] = 1;
            }
        }
    }
    int ans = 0;
    for(int m=0; m<(1<<n); m++) {
        bool ok = 1;
        int cnt = 0;
        for(int i=0; i<n && ok; i++) {
            if(m&(1<<i)) {
                cnt++;
                for(int j=0; j<i; j++) {
                    if((m&(1<<j)) && d[i][j]) {
                        ok = 0;
                        break;
                    }
                }
            }
        }
        if(ok) ans = max(ans, cnt);
    }
    cout<<ans<<'\n';
    return 0;
}