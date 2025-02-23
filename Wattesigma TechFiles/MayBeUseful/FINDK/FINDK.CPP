#include <bits/stdc++.h>
using namespace std;
long long n, a[1001], found, k, i;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("FINDK.INP", "r", stdin);
    freopen("FINDK.OUT", "w", stdout);
    cin >> n;
    for (i=1; i<=n; i++)
        cin >> a[i];
    cin >> k;
    found=0;
    for (i=1; i<=n; i++)
        if(a[i]==k)
        {
            cout << i << " ";
            found=1;
        }
    if (found==0)
        cout << -1;
    return 0;
}
