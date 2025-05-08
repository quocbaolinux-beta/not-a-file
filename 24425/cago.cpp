#include <bits/stdc++.h>
using namespace std;
long long n, a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("cago.inp", "r", stdin);
    freopen("cago.out", "w", stdout);
    cin >> n >> a;
    if(n<=a*a) cout << "ca";
    else cout << "go";
    return 0;
}