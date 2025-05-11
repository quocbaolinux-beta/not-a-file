#include <bits/stdc++.h>
using namespace std;
const int N=1e6+1;
int d[N], i, x, n, sl, cc;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("GAMEPLUZ.INP", "r", stdin);
    freopen("GAMEPLUZ.OUT", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        d[x]++;
    }
    long long gtmax=0;
    for(x=1; x<=1000000; x++){
        if(x*d[x]>=gtmax){
            gtmax=x*d[x];
            sl=d[x];
            cc=x;
        }
    }
    cout << sl << " " << cc;
    return 0;
} 