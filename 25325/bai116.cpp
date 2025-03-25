#include <bits/stdc++.h>
#define f false
#define t true
#define double long double
#define int long long
using namespace std;
int n;
double kqa, kqb;
double calb(int n) {
    double b = 0;
    for (int i = 1; i <= n; i++) {
        b += (2.0 * i - 1) / (2 * i + 1);
    }
    return b;
}
int32_t main(){
    ios::sync_with_stdio(f);
    cin.tie(0); cout.tie(0);
    freopen("bai1.inp", "r", stdin);
    freopen("bai1.out", "w", stdout);
    cin >> n;
    kqa = 0.5 - 1/n;
    kqb = calb(n);
    if(n%2==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    cout << fixed << setprecision(2) << kqa << endl << kqb;
    return 0;
}