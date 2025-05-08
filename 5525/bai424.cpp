#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int a[N], in[N], dp[N], n, i, j, res=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("bai4.inp", "r", stdin);
    freopen("bai4.out", "w", stdout);
    cin >> n;
    for(i=1; i<=n; i++) cin >> a[i];
    for(i=1; i<=n; i++){
        dp[i]=1;
        for(j=1; j<=i; j++){
            if(a[j]>a[i]){
                dp[i]=max(dp[i], dp[j]+1);
            }
        }
    }
    for(i=n; i>=1; i--){
        in[i]=1;
        for(j=n; j>=1; j--){
            if(a[j]>a[i]){
                in[i]=max(in[i], in[j]+1);
            }
        }
    }
    for(i=1; i<=n; i++){
        if(dp[i]>1&&in[i]>1){
            res=max(res, dp[i]+in[i]-1);
        }
    }
    cout << res;
    return 0;
}