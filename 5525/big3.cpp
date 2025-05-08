#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN=1e7+1;
ll n, a[MAXN];
bool cm(ll a, ll b){
    return a>b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(ll i=1; i<=n; i++){
        cin >> a[i];
    }
    ll ar=sizeof(a)/sizeof(a[1]);
    sort(a+1, a+1+ar, cm);
    cout << a[3] << '\n';
    return 0;
}