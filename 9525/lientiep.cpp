#include <bits/stdc++.h>
using namespace std;
long long n;
long double a;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("LIENTIEP.INP", "r", stdin);
    freopen("LIENTIEP.OUT", "w", stdout);
    cin >> n;
    if((n-6)%4==0) cout << (n-6)/4;
    else cout << "NO";
    return 0;
}