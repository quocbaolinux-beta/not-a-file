#include <bits/stdc++.h>
using namespace std;
long long a, i;
int n, r;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MODULO08.INP", "r", stdin);
    freopen("MODULO08.OUT", "w", stdout);
    cin >> n;
    a=0;
    for(i=1; i<=n; i++)
        a+=pow(i, 3);
    r = a%2017;
    cout << r;
    return 0;
}
