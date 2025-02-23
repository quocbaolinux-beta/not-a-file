#include <bits/stdc++.h>
using namespace std;
//CDIV.CPP
int n, a[200001],kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CDIV.INP", "r", stdin);
    freopen("CDIV.OUT", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i-1; j++){
            int maxa=__gcd(a[i], a[j]);
            if(maxa>kq)
                kq=maxa;
        }
    }
    cout << kq;
    return 0;
}