#include <bits/stdc++.h>
using namespace std;
long long m, n, k, mc, nc, ac, at, ar;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("cathinh.inp", "r", stdin);
    freopen("cathinh.out", "w", stdout);
    cin >> m >> n >> k;
    mc=m/k;
    nc=n/k;
    ac=mc*mc*k*k;
    at=m*n;
    ar=at-ac;
    cout << ar;
}