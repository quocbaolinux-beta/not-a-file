#include <bits/stdc++.h>
using namespace std;
long long n, ans=0, d=1, cnt=9;
long long demcs(long long n){
    long long dem=0;
    while(n>0){
        dem++;
        n/=10;
    }
    return dem;
}
void solve(){
    while(n>d*cnt){
        n-=d*cnt;
        ans+=cnt;
        d++;
        cnt*=10;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("page.inp", "r", stdin);
    freopen("page.out", "w", stdout);
    cin >> n;
    solve();
    if(n%d==0){
        ans+=n/d;
        cout << ans << '\n';
    } else{
        cout << 0 << endl;
    }
    return 0;
}