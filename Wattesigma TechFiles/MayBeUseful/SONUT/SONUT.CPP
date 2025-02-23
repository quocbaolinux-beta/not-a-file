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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SONUT.INP", "r", stdin);
    freopen("SONUT.OUT", "w", stdout);
    cin >> n;
    while(n>9)
        n=tongcs(n);
    cout << n;
    return 0;
}
