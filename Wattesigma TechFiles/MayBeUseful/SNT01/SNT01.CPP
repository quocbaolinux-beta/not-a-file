#include <bits/stdc++.h>

using namespace std;
long long n;
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
    freopen("SNT01.INP", "r", stdin);
    freopen("SNT01.OUT", "w", stdout);
    while(cin >> n)
        cout << isprime(n) << endl;
    return 0;
}
