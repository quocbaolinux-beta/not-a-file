#include <bits/stdc++.h>
using namespace std;
long long n, dem=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("countdiv.inp", "r", stdin);
    freopen("countdiv.out", "w", stdout);
    cin >> n;
    for(long long i=1; i<=sqrt(n); i++)
        if(n%i==0)
            dem++;
    cout << dem;
    return 0;
}