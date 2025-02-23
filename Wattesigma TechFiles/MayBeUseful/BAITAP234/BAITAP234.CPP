#include <bits/stdc++.h>
using namespace std;
long long n, kq, dv, ch, tr, ng;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("BAITAP234.INP", "r", stdin);
    freopen("BAITAP234.OUT", "w", stdout);
    cin >> n;
    dv=n%10;
    ch=(n/10)%10;
    tr=(n/100)%10;
    ng=n/1000;
    kq=dv+ch+tr+ng;
    cout << kq;
    return 0;
}
