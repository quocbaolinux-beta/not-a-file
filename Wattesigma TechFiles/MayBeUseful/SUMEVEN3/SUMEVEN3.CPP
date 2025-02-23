#include <bits/stdc++.h>
using namespace std;
long long i, j, k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SUMEVEN3.INP", "r", stdin);
    freopen("SUMEVEN3.OUT", "w", stdout);

    int n;
    vector<int> a(n);
    cin >> n;
    int d=0;
    for (i=1; i<=n; i++)
        cin >> a[i];
    for (i=1; i<=n-2; i++)
        for (j=i+1; j<=n-1; j++)
            for(k=j+1; k<=n; k++)
            {
                if ((a[i]+a[j]+a[k])%2==0)
                    d++;
            }
    cout << d;
    return 0;
}
