#include <bits/stdc++.h>
using namespace std;
long long n;
long long demuoc(long long n)
{
    long long dem = 0;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i * i == n)
                dem++;
            else
                dem += 2;
        }
    }
    return dem;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    cout << demuoc(n);
    return 0;
}