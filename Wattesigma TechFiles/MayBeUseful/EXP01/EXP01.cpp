#include <bits/stdc++.h>
using namespace std;

long long a, b, c, kq;
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL); cout.tie(NULL);
    freopen("EXP01.INP","r",stdin);
    freopen("EXP01.OUT","w",stdout);
    cin >> a >> b >> c;

    kq = a+b-c;

    cout << kq;
    return 0;
}
