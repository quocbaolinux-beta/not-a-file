#include <bits/stdc++.h>
using namespace std;
long long n, d[100001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("BMTICK.INP", "r", stdin);
    freopen("BMTICK.OUT", "w", stdout);
    cin >> n;
    vector<long long>t(n);
    vector<long long>h(n-1);
    for(int i=1; i<=n; i++)
        cin >> t[i];
    for(int i=1 ; i<n; i++)
        cin >> h[i];
    d[1]=1;
    d[2]=min(t[1]+t[2], h[1]);
    for(int i=3; i<=n; i++)
        d[i]=min(d[i-1]+t[i], d[i-2]+h[i-1]);
    cout << d[n];
    return 0;
}
