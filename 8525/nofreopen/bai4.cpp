#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll demcp(ll n){
    ll sum=0;
    int dem=0;
    for(ll i=1;;i++){
        ll sq=i*i;
        if(sum+sq>n) break;
        sum+=sq;
        dem++;
    }
    return dem;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        ll x;
        cin >> x;
        cout << demcp(x) << " ";
    }
    return 0;
}