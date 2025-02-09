#include <bits/stdc++.h>
using namespace std;
long long n, a[101], tu=0, mau=1, temp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("tong.inp", "r", stdin);
    freopen("tong.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        tu=tu*temp+mau;
        mau=mau*temp;
        long long gcdtmp=__gcd(tu, mau);
        tu=tu/gcdtmp;
        mau=mau/gcdtmp;
    }
    cout << tu << endl << mau;
    return 0;
}