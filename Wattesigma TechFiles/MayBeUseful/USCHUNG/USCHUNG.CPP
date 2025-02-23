#include <bits/stdc++.h>
using namespace std;
long long m, n, i;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("USCHUNG.INP", "r", stdin);
    freopen("USCHUNG.OUT", "w", stdout);
    cin >> n >> m;
    for(i=1; i<=min(n, m); i++)
    {
        if(m%i==0 && n%i==0)
            cout << i << " ";
    }
    return 0;
}
