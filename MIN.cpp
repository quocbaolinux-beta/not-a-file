#include <bits/stdc++.h>
using namespace std;
int n;
long long k, a[1000001], snn;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MIN.INP", "r", stdin);
    freopen("MIN.OUT", "w", stdout);
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    sort(a, a+1+n);
    snn = 1e18;
    bool thay=false;
    for(int i=1; i<=n; i++)
    {
        if(a[i] > k)
        {
            if(a[i]%2==1)
            {
                thay=true;
                snn=min(snn, a[i]);
            }
        }
    }
    if(thay)
        cout << snn << "\n";
    else
        cout << -1 << "\n";
    return 0;
}