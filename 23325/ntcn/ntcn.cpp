#include <bits/stdc++.h>
#define int long long
using namespace std;

int sdn(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int n, dem=0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("ntcn.inp", "r", stdin);
    freopen("ntcn.out", "w", stdout);
    cin >> n;
    for(int i =1; i<=n; i++){
        int a;
        cin >> a;
        if(__gcd(a, sdn(a))==1){
            dem++;
        }
    }
    cout << dem;
    return 0;
}
