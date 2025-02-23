#include <bits/stdc++.h>
using namespace std;
long long x1, x2, x3, b, c, d;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("PTB3.INP", "r", stdin);
    freopen("PTB3.OUT", "w", stdout);
    cin >> x1 >> x2 >> x3;
    b=-(x1+x2+x3);
    c=x1*x2+x2*x3+x1*x3;
    d=x1*x2*x3;
    cout <<b <<" "<<c <<" " <<d;
    return 0;
}
