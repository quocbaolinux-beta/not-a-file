#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, dem=0;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(ll k=1; k*k<=n*n; k++){
        ll sq=1LL*k*k;
        for(ll i=1; i*i<=sq; i++){
            if(sq%i!=0) continue;
            ll j=sq/i;
            if(j>i)continue;
            if(i<=n&&j<=n){
                dem++;
            }
        }
    }
    cout << dem << "\n";
    return 0;
}