#include <bits/stdc++.h>
using namespace std;
long long a, n, kq1, kq2;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("NUMFINAL.INP", "r", stdin);
    freopen("NUMFINAL.OUT", "w", stdout);
    cin >> a >> n;
    kq1=pow(a, n);
    for (int i=2; i<=a; i++)
    {
        kq2=kq1%10;
    }
    cout << kq2;
    return 0;
}
