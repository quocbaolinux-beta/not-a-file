#include <bits/stdc++.h>
#define int long long
#define double long double
#define endl '\n'
using namespace std;
const int MOD=2019;
int n;

int n3final(int n) {
    int cycle[] = {3, 9, 7, 1};  
    return cycle[(n - 1) % 4];
}
long long computeC(int n) {
    long long num = 1LL * n * (1LL * n * n - 1) % MOD * (1LL * n * n - 4) % MOD;
    long long result = (num * 1615) % MOD;  
    return result;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("bai2.inp","r", stdin);
    freopen("bai2.out","w", stdout);
    cin >> n;
    cout << n3final(n) << endl << computeC(n) << endl;
    return 0;
}