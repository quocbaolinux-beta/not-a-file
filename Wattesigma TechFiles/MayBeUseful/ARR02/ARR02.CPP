#include <bits/stdc++.h>
using namespace std;
long long d, i, s, a[101], n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("ARR02.INP", "r", stdin);
    freopen("ARR02.OUT", "w", stdout);
    cin >> n;
    d=0;
    s=0;
    for (i=1; i<=n-1; i++)
        if(a[i]>a[n])
        {
            d++;
            s+=a[i];
        }
    cout << d << endl << s;
    return 0;
}
