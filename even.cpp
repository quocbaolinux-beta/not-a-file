#include <bits/stdc++.h>
using namespace std;
long long l, r, dem;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("EVEN.INP", "r", stdin);
    freopen("EVEN.OUT", "w", stdout);
    cin >> l >> r;
    dem=0;
    for(int i=l; i<=r; i++)
    {
        if(i%2==0)
            dem++;
    }
    cout << dem;
    return 0;
}