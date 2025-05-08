#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, mod;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c >> d >> mod;
    cout << a%mod*b%mod*c%mod*d%mod;
    return 0;
}