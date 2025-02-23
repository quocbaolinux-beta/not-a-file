#include <bits/stdc++.h>
using namespace std;
long long n,d[101], i;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    freopen("STAIRS1.INP","r",stdin);
    freopen("STAIRS1.OUT","w",stdout);
    cin >> n;
    d[1]=1;
    d[2]=2;
    for(i=3; i<=n; i++){
        d[i]=d[i-1]+d[i-2];
        d[n]=d[i];
    }
    cout << d[n];
    return 0;
}
