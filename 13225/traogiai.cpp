#include <bits/stdc++.h>
using namespace std;
int n, maxa=0, maxn;
const int nmax=1e6+10;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("traogiai.inp", "r", stdin);
    freopen("traogiai.out", "w", stdout);
    cin >> n;
    int a[nmax];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    maxa=a[1];
    for(int i=1; i<=n; i++)
    {
        if(maxa<a[i]) maxa=a[i];
    }
    cout << maxa << endl;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==maxa) cout << i << " ";
    }
}