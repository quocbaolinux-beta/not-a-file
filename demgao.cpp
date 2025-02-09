#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, k, dem=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("DEMGAO.INP", "r", stdin);
    freopen("DEMGAO.OUT", "w", stdout);
    cin >> a >> b >> k;
    dem = (b / k) - ((a - 1) / k);
    cout << dem;
    return 0;
}
//đếm bội