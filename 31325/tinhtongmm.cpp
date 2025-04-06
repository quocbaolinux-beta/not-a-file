#include <bits/stdc++.h>
#define int long long
using namespace std;
int a, b, c;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> a >> b >> c;
    cout << max({a, b, c})+min({a, b, c});
    return 0;
}