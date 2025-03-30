#include <bits/stdc++.h>
#define ull unsigned long long
#define int long long
using namespace std;
const int mod = 2018;
ull n;
int a, b, maxn = -1e9, minn = 1e9;

bool isprime(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}
int cala(int n){
    int ans = 0;
    ans=(n*(n+1)*(n+2)*(2*n-1))/6;
    return ans;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("bai2.inp", "r", stdin);
    freopen("bai2.out", "w", stdout);
    cin >> n >> a >> b;
    for(int i = a; i <= b; i++){
        if (isprime(i)){
            maxn = max(maxn, i);
            minn = min(minn, i);
        }
    }
    cout << cala(n) << endl;
    cout << minn << " " << maxn << endl;
    return 0;
}