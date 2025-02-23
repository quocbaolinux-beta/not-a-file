#include <bits/stdc++.h>
using namespace std;
long long a, b, c;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("EQUTRI.INP", "r", stdin);
    freopen("EQUTRI.OUT", "w", stdout);
    cin >> a >> b >> c;
    if (a>=b+c || b>=a+c || c>=a+b)
        cout << 0;
    else if (a==b&&a==c)
        cout << 3;
    else if (a==b||a==c||b==c)
        cout << 2;
    else
        cout << 1;
    return 0;
}
