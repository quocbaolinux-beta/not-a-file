#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, x, res;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("timso.inp", "r", stdin);
    freopen("timso.out", "w", stdout);
    cin >> a >> x;
    for(int i = 1; i <= 40; i++)
    {
        if(pow(a, i)<=x)
        {
            res = i;
        }
    }
    cout << res;
    return 0;
}