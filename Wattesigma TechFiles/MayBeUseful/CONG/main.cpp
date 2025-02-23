#include <bits/stdc++.h>
using namespace std;
long long m, x, k, t, n, cscn, csck;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CONG.INP", "r", stdin);
    freopen("CONG.OUT", "w", stdout);
    cin >> n >> k;
    m=0;
    x=1;
    while (n>0)
    {
        cscn=n%10;
        csck=k%10;
        n=n/10;
        k=k/10;
        t=(cscn+csck)%10;
        m=x*t+m;
        x=x*10;
    }
    cout << m;
}
