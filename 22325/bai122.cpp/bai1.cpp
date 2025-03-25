#include <bits/stdc++.h>
#define int long long
using namespace std;
int a, b, k;
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); freopen("bai1.inp", "r", stdin); freopen("bai1.out", "w", stdout);
    cin >> k >> a >> b;
    cout << b/k - (a-1)/k;
    return 0;
}
