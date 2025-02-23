#include <bits/stdc++.h>
using namespace std;
long long p, q, r, s, u, v, a, b, c;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("FBALL.INP", "r", stdin);
    //freopen("FBALL.OUT", "w", stdout);
    cin >> p >> q >> r >> s >> u >> v;
    a=0; b=0; c=0;
    if(p<q) b+=3;
    else if (p==q)
    {
        a+=1;
        b+=1;
    }
    else if(p>q) a+=3;
    if(r<s) c+=3;
    else if (r==c)
    {
        a+=1;
        c+=1;
    }
    else if(r>s) a+=3;
    if(u<v) c+=3;
    else if (u==v)
    {
        b+=1;
        c+=1;
    }
    else if(u>v) b+=3;
    cout << a <<" " << b<< " " << c;
    return 0;
} 