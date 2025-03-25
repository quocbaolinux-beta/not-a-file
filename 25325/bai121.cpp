#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;

int cals(int n){
    double s=0;
    for(int i=3; i<=n; i++){
        s+=(i+1.0)/i;
    }
    return s;
}

int calt(int n){
    double t=0;
    for(int i=2; i<2*n; i+=2){
        t+=(1.0/pow(3.0, 2.0*i-1.0))-(1.0/pow(3.0, 2.0*i));
    }
    return t;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen(".inp", "r", stdin);
    freopen(".out", "w", stdout);
    cin >> n;
    cout << fixed << setprecision(5) << cals(n) << endl << calt(n);
    return 0;
}