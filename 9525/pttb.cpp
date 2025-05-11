#include <bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int n, a[N], dem=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("PTTB.INP", "r", stdin);
    freopen("PTTB.OUT", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=2; i<n; i++){
        if(a[i]*2==(a[i-1]+a[i+1])){
            dem++;
        }
    }
    cout << dem << endl;
    return 0;
}