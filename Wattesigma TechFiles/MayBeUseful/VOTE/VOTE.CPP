#include <bits/stdc++.h>
using namespace std;
long long a, b, c;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("VOTE.INP", "r", stdin);
    freopen("VOTE.OUT", "w", stdout);
    cin >> a >> b >> c;
    int max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    if (c > a && c > b) cout << 0 << "\n";
    else cout << max + 1 - c << "\n";
    return 0;
}
