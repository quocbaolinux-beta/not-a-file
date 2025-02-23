#include <bits/stdc++.h>
using namespace std;
long long a[1000001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SUMEVEN.INP", "r", stdin);
    freopen("SUMEVEN.OUT", "w", stdout);
    int n;
    cin >> n;
    int d=0;
    for(int i=1; i<=n; i++)
        cin >>a[i];
    for(int i=1; i<=n-1; i++){
        for (int j=i+1; i<=n; j++)
        {

            if ((a[i]+a[j])%2==0)
            {
                d++;
            }

        }
    }
    cout << d;
    return 0;
}
