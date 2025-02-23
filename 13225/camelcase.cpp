#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("camelcase.inp", "r", stdin);
    freopen("camelcase.out", "w", stdout);
    long long ans=1;
    char c;
    while(cin >> c) if(isupper(c)) ans++;
    cout << ans;
    return 0;
}