#include <bits/stdc++.h>
using namespace std;
long long a[1001], n, uc, i;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("DIV.INP", "r", stdin);
    freopen("DIV.OUT", "w", stdout);
    cin >> n;
    for(i=1; i<=n; i++)
        cin >> a[i];
    uc=__gcd(a[1], a[2]);
    a[1]=a[1]/uc;
    a[2]=a[2]/uc;
    for(i=3; i<=n; i++)
    {
        uc=__gcd(a[i], a[2]);
        a[i]=a[i]/uc;
        a[2]=a[2]/uc;
        if(a[2]==1)
            break;
    }
    if(a[2]==1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
