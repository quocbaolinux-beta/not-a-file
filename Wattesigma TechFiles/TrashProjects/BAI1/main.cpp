#include <bits/stdc++.h>
using namespace std;
long long a;
long long usc(long long n)
{
    long long dem = 0;
    for(int i=1; i<=n; i++)
    {
        if (n % i ==0)
            dem++;
    }
    return dem;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("main.inp", "r", stdin);
    //freopen("main.out", "w", stdout);
    cin >> a;
    cout << usc(a);
    return 0;
}
