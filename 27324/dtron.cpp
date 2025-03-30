#include <bits/stdc++.h>
#define int long long
#define pi 3.14159265358979323846
using namespace std;
int n; double cv, dt;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    cv=n*2*pi;
    dt=n*n*pi;
    cout << fixed << setprecision(4) << cv << endl << dt;
    return 0;
}