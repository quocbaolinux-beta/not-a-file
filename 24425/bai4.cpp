#include <bits/stdc++.h>
using namespace std;
const int N=1e6+1;
int n, a[3][N], dp[N], cal;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("bai4.inp", "r", stdin);
    freopen("bai4.out", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[1][i];
    }
    for(int i=1; i<=n; i++){
        cin >> a[2][i];
    }
    dp[1] = max(a[1][1], a[2][1]);
    dp[2] = max(a[1][2], a[2][2]);
    for(int i=3; i<=n; i++){
        dp[i] = max(a[1][i], a[2][i]);
    }
    for(int i=1; i<=n; i++){
        cal+=dp[i];
    }
    cout << cal;
    return 0;
}