#include <bits/stdc++.h>
using namespace std;
int n;
signed main()
{
    cin.tie(0) -> ios_base::sync_with_stdio(false);
    cin >> n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]==6) cout << 1 << "\n";
        if(a[i]==1) cout << 6 << "\n";
        if(a[i]==5) cout << 2 << "\n";
        if(a[i]==2) cout << 5 << "\n";
        if(a[i]==3) cout << 4 << "\n";
        if(a[i]==4) cout << 3 << "\n";
    }
    return 0;
}
