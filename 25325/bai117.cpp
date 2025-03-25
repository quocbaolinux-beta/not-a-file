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
        a += k / pow(2, k);
    }
    return a;
}

double calb(int n) {
    double b = 0;
    for (int k = 1; k <= n; k++) {
        b += ((2.0 * k - 3) * (2.0 * k-2)) / ((2.0 * k - 1) * (2.0 * k));
    }
    return b;
}

int32_t main(){
    ios::sync_with_stdio(f); 
    cin.tie(0); cout.tie(0);
    freopen("bai1.inp", "r", stdin);
    freopen("bai1.out", "w", stdout);
    cin >> n;
    cout << fixed << setprecision(3) << cala(n) << endl << calb(n);
    return 0;
}