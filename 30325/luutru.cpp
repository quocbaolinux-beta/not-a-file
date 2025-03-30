#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
using namespace std;
int n, byt;
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("luutru.inp", "r", stdin);
    freopen("luutru.out", "w", stdout);
    cin >> n;
    byt = n/1024;
    if(n%1024 != 0) byt++;
    cout << byt << endl;
    return 0;
}