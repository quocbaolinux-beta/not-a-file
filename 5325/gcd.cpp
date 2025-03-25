#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    int maxgcd=1;
    for(int a=1; a<n; a++)
    {
        int b=n-a;
        maxgcd=max(maxgcd,__gcd(a,b));
    }
    cout << maxgcd;
    return 0;
}