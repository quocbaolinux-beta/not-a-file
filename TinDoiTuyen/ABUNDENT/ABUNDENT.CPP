#include <bits/stdc++.h>
using namespace std;
long long n, dem, kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("ABUNDENT.INP", "r", stdin);
    freopen("ABUNDENT.OUT", "w", stdout);
    cin >> n;
    dem = 0;
    for (int i =1; i<=n; i++){
        for(int j=1; j<=n; i++){
            if(n%j==0)
                kq += j;
        }
        if (kq>n)
            dem++;
    }
    cout << kq;
    return 0;
}
