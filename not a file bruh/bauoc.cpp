#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll dem=0;
bool checkprime(ll n)
{
    if(n==1)
    return false;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=2; i*i<=n; i++)
    {
        if(checkprime(i))
            dem++;
    }
    cout << dem;
}