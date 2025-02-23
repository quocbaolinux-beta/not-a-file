#include <bits/stdc++.h>
#define pi 3.1415926535897
using namespace std;
long double r1, r2, s1, s2, kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("BAITAP231.INP", "r", stdin);
    freopen("BAITAP231.OUT", "w", stdout);
    cin >> r1 >> r2;
    s1=r1*r1*pi;
    s2=r2*r2*pi;
    kq=s1-s2;
    cout << fixed << setprecision(4) << kq;
}
