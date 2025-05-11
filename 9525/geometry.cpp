#include <bits/stdc++.h>
using namespace std;
long long a,b,c,s,kt,x1,d,x2;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("GEOMETRY.INP", "r", stdin);
    freopen("GEOMETRY.OUT", "w", stdout);
    cin>>a>>b>>s;
    d=(a+b)*(a+b)-4*(a*b-s);

    if(d<0)
        {cout<<-1;
        return 0;}

        long long e=sqrt(d);
        if(e*e!=d)
        {
            cout<<-1;
            return 0;
        }
    if((a+b+e)%2!=0&&(a+b-e)%2!=0)
        {cout<<-1;
         return 0;
        }
        x1=(a+b+e)/2;
        x2=(a+b-e)/2;
        if(x1<max(a,b)&&x2<max(a,b))
            cout<<-1;
        else
            if(x2<max(a,b))
            cout<<x1;
        else
            cout<<min(x1,x2);
    return 0;
}