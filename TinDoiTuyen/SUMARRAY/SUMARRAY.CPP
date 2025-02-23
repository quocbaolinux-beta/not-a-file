#include <bits/stdc++.h>
using namespace std;
int n;
long long a[1000001], kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SUMARRAY.INP", "r", stdin);
    freopen("SUMARRAY.OUT", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    for(int i =1; i<=n; i++)
        kq+=a[i];
    cout << kq;
    return 0;
}
