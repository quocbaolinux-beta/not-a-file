#include <bits/stdc++.h>
using namespace std;
int n, i;
long long a[100000001], t, b, c;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MAX2M.INP", "r", stdin);
    freopen("MAX2M.OUT", "w", stdout);
    cin >> n;
    for(i=1; i<=n; i++)
        cin >> a[i];
    for(i=1; i<=n; i++)
        b=max(b, a[i]);
    for(i=1; i<=n; i++)
    {
        if(a[i]==b)
            n=n;
        else
            c=max(c, a[i]);
    }
    t=b*c;
    cout << t;
    return 0;
}
