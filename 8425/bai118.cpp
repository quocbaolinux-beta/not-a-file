#include <bits/stdc++.h>
#define int long long
#define double long double
#define endl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(), x.end()
#define pb push_back
#define file(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout);
#define fi first
#define se second
using namespace std;
int n;
double cala(int n){
    double a = 0;
    for(int i=1; i<=2*n-1; i++){
        a+=i/(i+3);
    }
    return a;
}
double calb(int n){
    double b = 1;
    for (int k = 1; k <= n; ++k) {
        b *= (1 + 1.0 / pow(2, k));
    }
    return b;
}
int32_t main(){
    fast;
    //file("bai1");
    cin >> n;
    cout << fixed << setprecision(2) << cala(n) << endl << calb(n) << endl;
}
