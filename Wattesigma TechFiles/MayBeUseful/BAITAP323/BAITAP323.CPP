#include <bits/stdc++.h>
using namespace std;
long long p, q, r, s, u, v, a, b, c;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("BAITAP323.INP", "r", stdin);
    freopen("BAITAP323.OUT", "w", stdout);
    cin >> p >> q >> r >> s >> u >> v;
    a=0; b=0; c=0;
    if (p==q)
    {
        a=a+1;
        b=b+1;
    }
    else if (p>q)
        a=a+3;
    else
    {
        b=b+3;
    }
    if (r==s)
    {
        c=c+1;
        a=a+1;
    }
    else if (r>s)
        a=a+3;
    else
        c=c+3;
    if (u==v)
    {
        b=b+1;
        c=c+1;
    }
    else if (u>v)
        b=b+3;
    else
        c=c+3;
    cout << a << " " << b << " " << c;
    return 0;
}
