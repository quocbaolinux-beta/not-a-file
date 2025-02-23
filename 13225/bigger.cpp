#include <bits/stdc++.h>
using namespace std;
double a, b;
int dem;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("bigger.inp", "r", stdin);
    freopen("bigger.out", "w", stdout);
    cin >> a >> b;
    dem=0;
    while (a<=b)
    {
        a*=1.2;
        b*=1.1;
        dem++;
    }
    cout << dem;
    return 0;
}