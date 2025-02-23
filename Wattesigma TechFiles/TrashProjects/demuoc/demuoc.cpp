#include <bits/stdc++.h>
using namespace std;
long long n, i, dem;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("demuoc.inp", "r", stdin);
    freopen("demuoc.out", "w", stdout);
    cin >> n;
    for(i=1; i<=n; i++)
        if(n%i==0)
            dem++;
    cout << dem;
    return 0;
}
