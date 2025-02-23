#include <bits/stdc++.h>
using namespace std;
long long n;
long long dem=0;
bool isprime(long long n)
{
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); freopen("UOCNT.inp", "r", stdin); freopen("UOCNT.OUT", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            if(isprime(i))
                dem++;
        }
    }
    cout << dem;
    return 0;
}