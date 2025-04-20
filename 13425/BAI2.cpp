#include <bits/stdc++.h>
using namespace std;
long long n,s,k,maxv,minv,kq,u,v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    cin >> n;
    kq=0;
    for(int k=2;k*k<2*n;k++){
        s=1ll*k*k;
    maxv=max(s-n+1,1ll);
    minv=min(n-1,s-1);
     for (int v=maxv;v<=minv;v++) {
             u=s-v;
            if (u<v&&u>=1) {
                kq++;
            }
        }
    }
    cout<<kq;
    return 0;
}