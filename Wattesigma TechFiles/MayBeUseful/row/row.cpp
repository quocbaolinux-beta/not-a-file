#include <bits/stdc++.h>
using namespace std;
long long n, a[1000001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("row.inp", "r", stdin);
    freopen("row.out", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    sort(a+1, a+n+1);
    bool kt = true;
    for(int i=1; i<=n; i++)
        if (a[i]!=i*i)
        {
            kt = false;
            break;
        }
    if (kt==false)
        cout << 0;
    else
        cout << 1;
}
