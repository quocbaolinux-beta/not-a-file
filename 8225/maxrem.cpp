#include <bits/stdc++.h>
using namespace std;
int n, a[200001], maxrem;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    maxrem=0;
    for(int i=0; i<n-1; i++)
    {
        maxrem=max(maxrem, a[n-1]%a[i]);
    }
    cout << maxrem << endl;
    return 0;
}