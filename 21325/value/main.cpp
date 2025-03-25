#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
ll a,b,c, tich,tong;
ld sqr;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c;
    tong=a+b+c;
    tich=a*b*c;
    sqr=sqrt(tich);
    cout<<fixed<<setprecision(2) << tong/(tich+sqr)<<"\n";
    return 0;
}
