#include <bits/stdc++.h>
using namespace std;
long long n;
int x;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CHIPHI.INP", "r", stdin);
    freopen("CHIPHI.OUT", "w", stdout);
    cin >> n >> x;
    cout << (n+1)/2*x;
    return 0;
}
