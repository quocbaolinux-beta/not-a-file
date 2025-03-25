#include <bits/stdc++.h>
#define int long long
/*------------------------------------------*/
using namespace std;
int n;
void opening()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen(".inp", "r", stdin);
    //freopen(".out", "w", stdout);
}
int congthuc(int n){
    return pow(((n*(n+1))/2), 2);
}
int32_t main()
{
    opening();
    cin >> n;
    cout << congthuc(n);
    return 0;
}
