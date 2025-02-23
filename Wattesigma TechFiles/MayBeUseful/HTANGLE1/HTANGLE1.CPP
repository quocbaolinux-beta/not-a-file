#include <bits/stdc++.h>

using namespace std;

long long a, b;
long double c, hc;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("HTANGLE1.INP", "r", stdin);
    freopen("HTANGLE1.OUT", "w", stdout);

    cin >> a >> b;
    c = sqrt(a*a+b*b);
    hc=(a*b)/c;
    cout << fixed << setprecision(4) << hc;
    return 0;
}
