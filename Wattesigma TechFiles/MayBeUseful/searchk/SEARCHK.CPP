#include <bits/stdc++.h>
using namespace std;
long long n, kq;
int giai_thua(int n)
{
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * giai_thua(n - 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SEARCHK.INP", "r", stdin);
    freopen("SEARCHK.OUT", "w", stdout);
    int m;
    cin >> n >> m;
    for(int k=1; k<=n; k++)
        if((giai_thua(n))%(pow(m, k))==0)
            cout << k;
    return 0;
}
