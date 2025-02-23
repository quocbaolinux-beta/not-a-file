#include <bits/stdc++.h>
using namespace std;
int n, a[200001];
int kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CDIV.INP", "r", stdin);
    freopen("CDIV.OUT", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            kq = max(kq, __gcd(a[i], a[j]));
        }
    }

    cout << kq;
    return 0;
}

