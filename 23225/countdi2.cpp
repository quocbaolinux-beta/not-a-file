#include <bits/stdc++.h>
using namespace std;
long long n, dem=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("countdi2.inp", "r", stdin);
    freopen("countdi2.out", "w", stdout);
    while(cin >> n)
    {
        for(long long i=2; i<=n/2; i++)
            if(n%i==0)
                dem++;
        cout << dem << endl;
    }
    return 0;
}