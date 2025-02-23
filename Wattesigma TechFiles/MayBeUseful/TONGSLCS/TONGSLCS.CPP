#include <bits/stdc++.h>
using namespace std;
long long n;
long long tongcs(long long n)
{
    long long t;
    t=0;
    while (n>0)
    {
        t=t+(n % 10);
        n=n/10;
    }
    return t;
}
long long demcs(long long n)
{
    long long d;
    d=0;
    while (n>0)
    {
        d++;
        n=n/10;
    }
    return d;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("TONGSLCS.INP", "r", stdin);
    freopen("TONGSLCS.OUT", "w", stdout);
    cin >> n;
    cout << tongcs(n) << endl << demcs(n);
    return 0;
}
