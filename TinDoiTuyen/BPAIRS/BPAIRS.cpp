#include <bits/stdc++.h>
using namespace std;
int n;
long long a[300001];
long long tongcs(long long n)
{
    long long tong=0;
    n=abs(n);
    while (n<0)
    {
        tong+=n%10;
        n/=10;
    }
    return tong;
}
bool check(long long a, long long b)
{
    if(tongcs(a)==tongcs(b)) return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("BPAIRS.INP", "r", stdin);
    freopen("BPAIRS.OUT", "w", stdout);
    cin >> n;
    for(int i=1 ;i<=n; i++)
        cin >> a[i];
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
            if(check(a[i], a[j])) dem++;
    }
    cout << dem;
    return 0;
} 