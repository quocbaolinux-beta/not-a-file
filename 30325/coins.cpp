#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define file(n) {freopen(n".inp", "r", stdin); freopen(n".out", "w", stdout);}
using namespace std;
const int M = 1e5 + 9;
struct tq{
    ll a, b;
};
bool cmp(tq x, tq y){
    return x.a < y.a;
}
tq a[M];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    file("coins");
    ll n,m;
    cin>>n >> m;
    for(int i=1; i<=n; i++){
        cin >> a[i].a;
    }
    for(int i=1; i<=n; i++){
        cin >> a[i].b;
    }
    sort(a+1, a+n+1, cmp);
    for(int i=1; i<=n; i++){
        if(m >= a[i].b-a[i].a){
            m += a[i].a;
        }
        else break;
    }
    cout << m << endl;
    return 0;
}