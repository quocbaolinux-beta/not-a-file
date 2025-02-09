#include <bits/stdc++.h>
using namespace std;
int n, a[1000001], maxn = 0;
int demuoc(int n)
{
    int dem=0;
    for(int i=1; i<=n/2;i++)
    {
        if(n%i==0) dem++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) a[i] = demuoc(a[i]);
    sort(a + 1, a + n + 1);
    for(int i=1; i<=n; i++)
    {
        maxn=max(maxn,a[i]);
    }
    cout << maxn;
    return 0;
}