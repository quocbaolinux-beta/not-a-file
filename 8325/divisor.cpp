#include <bits/stdc++.h>
#define int long long
const int MOD = 1e9 + 7;
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    int tich = 1;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        tich *= a[i];
    }

    int dem = 0;
    for(int i = 1; i * i <= tich; i++)
    {
        if(tich % i == 0)
        {
            dem++;
            if(i != tich / i) dem++;
        }
    }

    cout << dem%MOD;
    return 0;
}