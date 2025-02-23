#include <bits/stdc++.h>
using namespace std;
int n, a[1000001], t[1000001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MAGICBAG.INP", "r", stdin);
    freopen("MAGICBAG.OUT", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    t[1]=a[1];
    t[2]=a[2];
    t[3]=a[1]+a[3];
    for(int i=4; i<=n; i++)
        t[i]=max(t[i-2], t[i-3])+a[i];
    cout << max(t[n], t[n-1]);
    return 0;
}
