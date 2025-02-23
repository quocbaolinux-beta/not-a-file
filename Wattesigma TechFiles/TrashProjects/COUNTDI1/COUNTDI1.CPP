#include <bits/stdc++.h>
using namespace std;
long long a;
long long usc(long long n)
{
    long long dem = 0;
    for(int i=1; i<=sqrt(n); i++)
    {
        if (n % i ==0)
            {
                dem++;
                int quote = n / i;
                if (quote !=i)
                {
                    dem++;
                }
            }
    }
    return dem;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("COUNTDI1.INP", "r", stdin);
    freopen("COUNTDI1.OUT", "w", stdout);
    cin >> a;
    cout << usc(a);
    return 0;
}
