#include <bits/stdc++.h>

using namespace std;
long long a;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SUMAR.INP", "r", stdin);
    freopen("SUMAR.OUT", "w", stdout);
    cin >>n;
    a[1]=1*2;
    for (int i=2; i<=n; i++)
        a[i]=a[i-1]+(i*i+1);
    for(i=1; i<=n; i++)
        s=s+a[i];
    cout << s%2018;
}
