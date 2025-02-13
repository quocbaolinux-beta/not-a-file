#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll dem=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("bai1.inp", "r", stdin);
    freopen("bai1.out", "w", stdout);
    cin >> n;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(n/i==i) dem++;
            else dem+=2;
        }
    }
    cout << dem;
    return 0;
}