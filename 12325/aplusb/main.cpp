#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a, b;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i =1; i<=n; i++)
    {
        cin >> a >> b;
        cout << a+b << "\n";
    }
    return 0;
}
