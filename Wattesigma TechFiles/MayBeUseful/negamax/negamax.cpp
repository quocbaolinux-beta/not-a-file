#include <bits/stdc++.h>
using namespace std;

long long a[1000009], i, n, cpp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("negamax.INP", "r", stdin);
    freopen("negamax.OUT", "w", stdout);
    cin >> n;
    for(i=1; i<=n; i++)
        cin >> a[i];
    for(i=1; i<=n; i++)
        if(a[i]<0)
            cpp = max(a[i], a[i-1]);
        else
            break;
    cout << cpp;
    return 0;
}
