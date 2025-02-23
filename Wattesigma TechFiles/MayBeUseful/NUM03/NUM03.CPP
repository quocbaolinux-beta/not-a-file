#include <bits/stdc++.h>

using namespace std;
long long n, kq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("NUM03.INP", "r", stdin);
    freopen("NUM03.OUT", "w", stdout);

    cin >> n;
    kq = (n/100)%10;
    cout << kq;
    return 0;
}
