#include <bits/stdc++.h>
using namespace std;

int n;
map<int, int> d;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("maxcetri.inp", "r", stdin);
    freopen("maxcetri.out", "w", stdout);
    cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        
        d[x]++;
        if (d[x] == 3) {
            res = max(res, x);
        }
    }
    
    long long k = d[res];
    cout << k * (k-1) * (k-2) / 6;

    return 0;
}
