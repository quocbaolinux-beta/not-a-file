#include <bits/stdc++.h>
using namespace std;
long long x, y, d, i;
long long isprime(long long n)
{
    long long i;
    if(n<2)
        return 0;
    for(i=2; i<=sqrt(n); i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SNT04.INP", "r", stdin);
    freopen("SNT04.OUT", "w", stdout);
    cin >> x >> y;
    d=0;
    for(i=x; i<=y; i++)
        if(isprime(i)==1)
            d++;
    cout << d;
    return 0;
}
