#include <bits/stdc++.h>
using namespace std;
bool ispalindrone(long long n)
{
    long long m = n, r = 0;
    while (m > 0)
    {
        r = r * 10 + m % 10;
        m /= 10;
    }
    return r == n;
}
int a, b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("CAU3.INP", "r", stdin);
    //freopen("CAU3.OUT", "w", stdout);
    cin >> a >> b;
    long long res=0;
    for(int i = a; i <= b; i++)
    {
        if(ispalindrone(i))
        {
            res += i;
        }
    }
    cout << res << endl;
    return 0;
}