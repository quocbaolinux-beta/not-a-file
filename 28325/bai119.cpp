#include <bits/stdc++.h>
#define int long long
#define double long double
#define endl '\n'
using namespace std;

int n;
double cala(int n){
    double ans =0;
    for(int i=2; i<=n; i++){
        ans+=(i-1.0)/(i+1.0);
    }
    return ans;
}
double calb(int n){
    double b = 0.0;
    for (int k = 2; k <= n; k++) {
        b += 1.0 / (4.0 * k) - 1.0 / (4.0 * (k + 1));
    }
    return b;
} 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("bai1.inp","r", stdin);
    freopen("bai1.out","w", stdout);
    cin >> n;
    cout << fixed << setprecision(5) << cala(n) << endl << calb(n) << endl;
    return 0;
}