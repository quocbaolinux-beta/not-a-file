#include <bits/stdc++.h>
using namespace std;
long long a, kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("EVENODD.INP", "r", stdin);
    freopen("EVENODD.OUT","w", stdout);
    cin >> a;
    if (a%2==0)
        cout << 0;
    else
        cout << 1;
    return 0;
}
