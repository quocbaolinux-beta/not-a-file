#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
ll demuoc(ll n){
    ll dem=0;
    for(ll i=1; i<=sqrt(n); i++){
        if(n%i==0){
            dem++;
            if(n/i!=i){
                dem++;
            }
        }
    }
    return dem==3;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("sdb.inp", "r", stdin);
    freopen("sdb.out", "w", stdout);
    cin >> n;
    while(n--){
        long long a;
        cin >> a;
        while(a++){
            if(demuoc(a)){
                cout << a << " ";
                break;
            }
        }
    }
    return 0;
}