#include <bits/stdc++.h>

using namespace std;
long long a, b, kq1, kq2, kq3, kq4;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("BAITAP229.INP", "r", stdin);
    freopen("BAITAP229.OUT", "w", stdout);
    cin >> a >> b;
    kq1 = a + b;
    kq2 = a-b;
    kq3 = a*b;
    kq4 = a/b;
    cout << a << " + " << b << " = " << kq1 << endl;
    cout << a << " - " << b << " = " << kq2 << endl;
    cout << a << " * " << b << " = " << kq3 << endl;
    cout << a << " div " << b << " = " << kq4 << endl;
    return 0;
}
