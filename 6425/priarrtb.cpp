#include <bits/stdc++.h>
using namespace std;
long long n, a[101], dem=0;
long double tong=0;
long long isprime(long long n){
    if (n < 2) return 0;
    for (long long i = 2; i * i <= n; i++){
        if (n % i == 0) return 0;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("piarrtb.inp", "r", stdin);
    freopen("piarrtb.out", "w", stdout);
    cin >> n;
    for(long long i=1; i<=n; i++){
        cin >> a[i];
        if(isprime(a[i])==1){
            dem++;
            tong+=a[i];
        }
    }
    if(dem==0) cout << "$";
    else cout <<fixed<<setprecision(2)<< tong/dem;
    return 0;
}