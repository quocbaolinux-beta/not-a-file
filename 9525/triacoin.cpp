#include <bits/stdc++.h>
using namespace std;
long long n, i, d, kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("triacoin.INP", "r", stdin);
    freopen("triacoin.OUT", "w", stdout);
    cin >> n;
    i=1; d=0;
    while(d+i<=n){
        d+=i;
        i++;
    }
    cout << i-1;
    return 0;
}