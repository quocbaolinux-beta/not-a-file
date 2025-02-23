#include <bits/stdc++.h>

using namespace std;

long long n, i, a[101];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("ARR01.INP", "r", stdin);
    freopen("ARR01.OUT", "w", stdout);
    cin >>n;
    for(i=1;i<=n;i++)
        cin >>a[i];

    for(i=n;i>=1;i+=-1)
        cout <<a[i] <<" ";
    return 0;
}
