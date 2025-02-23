#include <bits/stdc++.h>
using namespace std;
long long n;
long long kq=0;
long long tong(long long n)
{
    long long tong=0;
    for(long long i=1; i<n; i++){
        long long a=i*(i+1)*(i+2);
        tong+=a;
    }
    return tong;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("tong.inp", "r", stdin);
    freopen("tong.out", "w", stdout);
    cin >> n;
    kq=tong(n);
    cout << kq;
    return 0;
}