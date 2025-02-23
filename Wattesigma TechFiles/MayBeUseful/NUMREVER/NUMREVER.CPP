#include <bits/stdc++.h>
using namespace std;
long long a;

long long sodaonguoc(long long n)
{
    long long m, csc;
    m=0;
    while(n>0)
    {
        csc=n%10;
        n=n/10;
        m=m*10+csc;
    }
    return m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("NUMREVER.INP", "r", stdin);
    freopen("NUMREVER.OUT", "w", stdout);
    cin >> a;
    cout << sodaonguoc(a);
    return 0;
}
