#include <bits/stdc++.h>
#define int long long 
#define mod 2018
using namespace std;

int a,b,n, minn = 1e9, maxx = -1e9;

bool isprime(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int cala(int n){
    return (n*(n+1)*(n+2)*(2*n-1))/6; 
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    freopen("bai2.inp", "r", stdin);
    freopen("bai2.out", "w", stdout);
    cin >> n >> a >> b;
    for(int i=a; i<=b; i++){
        if(isprime(i)){
            minn = min(minn, i);
            maxx = max(maxx, i);
        }
    }
    cout << cala(n)%2018 << endl << minn << " " << maxx;
    return 0;
}