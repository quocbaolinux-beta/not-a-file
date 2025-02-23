#include <bits/stdc++.h>

using namespace std;

long long a, b, c;
long double p, s, ha, hb, hc;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("HTANGLE2.INP", "r", stdin);
    freopen("HTANGLE2.OUT", "w", stdout);

    cin >> a >> b >> c;
    p=(a+b+c)/2.0;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    ha = 2*s/a;
    hb = 2*s/b;
    hc = 2*s/c;
    cout << fixed << setprecision(4) << ha << endl;
    cout << hb << endl;
    cout << hc;
    return 0;
}
