#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll kt(ll x)
{
    ll y = 0;
    while(x)
    {
        y= y*10+x%10;
        x/=10;
    }
    return y;
}
ll binon(ll n)
{
    if(n == 0) return 5;
    ll y = 0;
    while(n)
    {
        y = y*10+(n %10 == 0 ? 5 : n % 10);
        n /= 10;
    }
    return kt(y);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<binon(n)<<endl;
    }
    return 0;
}