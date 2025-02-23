#include <bits/stdc++.h>
using namespace std;
int n, k;
void solve()
{
    cin >> n >> k;
    vector<int>a(n);
    for(int i = 1; i<=n; i++)
        cin >> a[i];
    int kq=0;
    for(int i =1; i<n; i++)
        kq+=a[i]+a[i+1];
    if(kq%k==0)
        cout << "BEAUTIFUL";
    else
        cout << "NOT BEAUTIFUL";
}
int main()
{
    solve();
    return 0;
}
