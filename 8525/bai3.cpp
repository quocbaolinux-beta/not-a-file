#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("bai3.inp", "r", stdin);
    //freopen("bai3.out", "w", stdout);
    long long int n, k;
    cin >> n >> k;
    vector<ll>a(n+1), su(n+1,0), ec(n+1,0);
    for(ll i=1; i<=n; i++){
        cin >> a[i];
        su[i]=su[i-1]+a[i];
        ec[i]=ec[i-1]+(a[i]%2==0);
    }
    ll bsu=LLONG_MIN;
    int be=-1, bst=0;

    for (int i=1; i<=n-k+1; i++) {
        int j=i+k-1;
        ll t=su[j]-su[i-1];
        int e=ec[j]-ec[i-1];
        if (t>bsu || (t==bsu && e>be) || (t==bsu && e==be && i<bst+1)) {
            bsu=t;
            be=e;
            bst=i-1; 
        }
    }
    cout << bst+1 << ' ' << bst+k << '\n';
    return 0;
}
