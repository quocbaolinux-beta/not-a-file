#include <bits/stdc++.h>
#define int long long
using namespace std;
bool isprime(int n)
{
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
int maxp=0, n, f=0;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("tansuat.inp", "r", stdin);
    freopen("tansuat.out", "w", stdout);
    while (cin >> n) {
        if (isprime(n)) {
            if (n > maxp) {
                maxp= n;
                f = 1;
            } else if (n == maxp) {
                f++;
            }
        }
    }
    if(maxp>0) cout << maxp << " " << f << "\n";
    else cout << "0 0" << "\n";
    return 0;
}
