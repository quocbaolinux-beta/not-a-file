#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
    return dem;
}
ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    cout << demuoc(n) << endl;
    return 0;
}