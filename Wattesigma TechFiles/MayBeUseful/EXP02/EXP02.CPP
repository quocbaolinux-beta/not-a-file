#include <bits/stdc++.h>

using namespace std;

long long a, b;
long double kq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("EXP02.INP", "r", stdin);
    freopen("EXP02.OUT", "w", stdout);

    cin >> a >> b;
    kq = abs(a+b)/sqrt(a*a+b*b);
    cout << fixed << setprecision(4) << kq;

    return 0;
}
