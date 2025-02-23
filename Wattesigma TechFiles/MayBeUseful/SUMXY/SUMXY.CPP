#include <bits/stdc++.h>
using namespace std;
long long x, y, i, s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SUMXY.INP", "r", stdin);
    freopen("SUMXY.OUT", "w", stdout);
    cin >> x >> y;
    s=0;
    for(i=x; i<=y; i++)
        s+=i*i;
    cout << s;
    return 0;
}
