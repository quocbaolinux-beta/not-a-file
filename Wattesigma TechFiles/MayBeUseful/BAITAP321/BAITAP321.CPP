#include <bits/stdc++.h>
using namespace std;
long long x, y, u, v, c1, c2;
long double r, s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("BAITAP321.INP", "r", stdin);
    freopen("BAITAP321.OUT", "w", stdout);
    cin >> x >> y >> u >> v;
    c1=y-v;
    c2=u-x;
    if(c1==c2)
    {
        cout << "HINH VUONG" << endl;
        r=c1/2.0;
    }
    else
    {
        cout << "HINH CHU NHAT" << endl;
        r=sqrt(c1*c1+c2*c2)/2;
    }
    s=r*r*3.1415926535897;
    cout << fixed << setprecision(4) << s;
    return 0;
}
