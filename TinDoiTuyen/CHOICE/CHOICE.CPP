#include <bits/stdc++.h>
using namespace std;
long long a[1000001], n, demle, demchan;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CHOICE.INP", "r", stdin);
    freopen("CHOICE.OUT", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    for(int i=1; i<n; i++){
        if(a[i]%2==0)
            demchan++;
        else
            demle++;
    }
    long long cach=0;
    cach += demchan*(demchan-1)/2;
    cach += demle*(demle-1)/2;
    cout << demchan;
    return 0;
}
