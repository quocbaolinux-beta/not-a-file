#include <bits/stdc++.h>
using namespace std;
long long a1,a2,b1,b2,m,n,a,b,i;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    freopen("BAI4.INP", "r", stdin);
    freopen("BAI4.OUT", "w", stdout);
    cin >> n;
    if(n==1)
    {
        cout << 2 << endl;
        return 0;
    }
   m=1e9+7;
     a1=1,a2=2;
     b1=1,b2=2;
     for (i=3;i<=n; i++)
    {
        a=(b2+b1)%m;
        b=(a2+a1)%m;
        a1=a2;
        a2=a;
        b1=b2;
        b2=b;
    }

    cout <<(a2+b2)%m << endl;
    return 0;
}