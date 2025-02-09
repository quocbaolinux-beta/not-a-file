#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pi 3.14159265358979323846
using namespace std;
ll r;
ld p,s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> r;
    p=pi*r*2;
    s=pi*r*r;
    cout << fixed << setprecision(4) << s << endl << p;
    return 0;
}