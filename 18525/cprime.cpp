#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, rv;
ll rev(ll n){
    ll rn=0;
    while(n>0){
        rn=rn*10+n%10;
        n/=10;
    }
    return rn;
}
bool isprime(ll n){
    if(n<2) return false;
    for(ll i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    rv=rev(n);
    if(isprime(n)&&isprime(rv)){
        cout << 1;
    }else{
        cout << 0;
    }
}