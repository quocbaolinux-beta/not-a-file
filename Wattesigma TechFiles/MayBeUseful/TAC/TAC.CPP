#include <bits/stdc++.h>
using namespace std;
long long n, m, k, dl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("TAC.INP", "r", stdin);
    freopen("TAC.OUT", "w", stdout);
    cin >> n >> m >> k;
    dl=abs(n-m);
    if (k>=dl)
        cout << 0;
    else
        cout << dl-k;
    return 0;
}
