#include <bits/stdc++.h>
using namespace std;
long long n, m, cpo, cpi, tpi, tpo;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    freopen("scandy.inp", "r", stdin);
    freopen("scandy.out", "w", stdout);
    cin >> n >> m;
    cpo=ceil(n/2.0);
    cpi = n/2;
    tpi=ceil(m/2.0);
    tpi = m/2;
    cout <<cpo <<" " <<tpo <<endl <<cpi << "  "<<tpi;
    return 0;
}
