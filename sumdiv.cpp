#include <bits/stdc++.h>
using namespace std;
int q, n[1000001], i;
int tonguoc(int n)
{
    int tong=0;
    for(i=1; i<=n; i++)
        if(n%i==0)
            tong+=i;
    return tong;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("sumdiv.inp", "r", stdin);
    freopen("sumdiv.out", "w", stdout);
    cin >> q;
    for(i=1; i<=q; i++)
        cin >> n[i];
    for(i=1; i<=q; i++)
    {
        cout << tonguoc(n[i]) << endl;
    }
    return 0;
}