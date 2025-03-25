#include <bits/stdc++.h>
#define f false
#define t true
#define double long double
#define int long long

using namespace std;

int n;

double cala(int n) {
    double a = 0;
    for (int k = 1; k <= n; k++) {
        a += (2.0 * k - 1) / (2.0 * k + 2);
    }
    return a;
}

double calb(int n) {
    double b = 0;
    for (int k = 1; k <= n; k++) {
        b *= (1+(1/pow(2, n)));
    }
    return b;
}

int32_t main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    //freopen("bai1.inp", "r", stdin);
    //freopen("bai1.out", "r", stdout);
    cin >> n;
    cout << fixed << setprecision(2) << cala(n)<< endl << calb(n);
    return 0;
}