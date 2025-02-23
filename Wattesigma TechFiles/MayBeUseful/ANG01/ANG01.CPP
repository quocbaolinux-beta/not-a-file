#include <bits/stdc++.h>
using namespace std;
long long a, b, c;
long double p, s, d;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("ANG01.INP", "r", stdin);
    freopen("ANG01.OUT", "w", stdout);
    cin >> a >> b >> c;
    if(a+b<=c || a+c<=b || b+c<=a)
        cout << 0;
    else
        p = a + b + c;
        d = (a + b + c)/2;
        s = sqrt(d * (d - a) * (d - b) * (d - c));
        cout << fixed << setprecision(2)<< p << endl << s;
    return 0;
}
