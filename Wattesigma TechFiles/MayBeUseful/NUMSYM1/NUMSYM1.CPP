#include <bits/stdc++.h>
using namespace std;
long long n;

long long sodaonguoc(long long n)
{
    long long m, csc;
    m=0;
    while(n>0)
    {
        csc=n%10;
        n=n/10;
        m=m*10+csc;
    }
    return m;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("NUMSYM1.INP", "r", stdin);
    freopen("NUMSYM1.OUT", "w", stdout);
    cin >> n;
    if(sodaonguoc(n)==n)
        cout << 1;
    else
        cout << 0;
    return 0;
}
