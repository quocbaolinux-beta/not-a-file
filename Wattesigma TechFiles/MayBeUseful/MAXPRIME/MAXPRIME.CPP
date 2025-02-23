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
    //freopen("MAXPRIME.INP", "r", stdin);
    //freopen("MAXPRIME.OUT", "w", stdout);
    cin >> n;
    if(n>1)
        while(isprime(n)==0)
            n--;
    cout << n;
    return 0;
}
