#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, res;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    res=n/60;
    if(res>23) cout << 24-res << n%60;
    else cout << res << " " << n%60;
    return 0;
}