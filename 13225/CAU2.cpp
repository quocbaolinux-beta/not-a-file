#include <bits/stdc++.h>
using namespace std;
bool a[10000001]={true, true};
long long k=10;
long long z(long long n)
{
    long long ans=0;
    while(n)
    {
        long long c=n%10;
        ans+=c*c;
        n/=10;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("cau2.inp", "r", stdin);
    freopen("cau2.out", "w", stdout);
    long long n, ans=0;
    cin >> n;
    for(long long i=2;i<=3612; i++)
        if(a[i]==false)
        {
            for(long long j=i*i; j<=10000000; j+=i) a[j]=true;
        }
    while(ans!=n)
    {
        k++;
        if(a[z(k)]==false) ans++;
    }
    cout << k;
    return 0;
}