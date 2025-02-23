#include <bits/stdc++.h>
using namespace std;
long long n,d[101], a[101], i;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    freopen("DVIEN.INP","r",stdin);
    freopen("DVIEN.OUT","w",stdout);
    while (cin >> n)
    {
        d[1]=1;
        d[2]=3;
        for(i=3; i<=n; i++)
            d[i]=d[i-1]+2*d[i-2];
        cout << d[n] << endl;
    }
    return 0;
}
