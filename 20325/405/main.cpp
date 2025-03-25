#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, dem;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    vector<ll>a(n);
    for(int i=1; i<=n; i++){
        cin >> a[i];
        if(a[i]%2==0)
            dem++;
    }
    cout << dem;
    return 0;
}
