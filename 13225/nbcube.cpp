#include <bits/stdc++.h>
using namespace std;
double a, b;
long double ansa, ansb;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b;
    ansa=a*a*a;
    ansb=b*b*b;
    cout << fixed << setprecision(2) << ansa+ansb;
    return 0;
}
