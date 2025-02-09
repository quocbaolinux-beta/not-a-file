#include <bits/stdc++.h>
using namespace std;
int q, l[100001], r[100001];
long long tongcs(long long a)
{
    long long tong=0;
    while (a != 0) {
        tong += a % 10;
        a /= 10;
    }
    return tong;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("sum.inp", "r", stdin);
    freopen("sum.out", "w", stdout);
    cin >> q;
    for(int i=1; i<=q; i++)
        cin >> l[i] >> r[i];
    
    return 0;
}