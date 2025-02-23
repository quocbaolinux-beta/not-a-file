#include <bits/stdc++.h>
using namespace std;
long long n, m, kqnn, kqdu;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CHIAKEO01.INP", "r", stdin);
    freopen("CHIAKEO01.OUT", "w", stdout);
    cin >> n >> m;
    kqnn = m / n;
    kqdu = m%n;
    cout << kqnn << endl << kqdu;
    return 0;
}
