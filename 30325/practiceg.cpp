#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
using namespace std;
const int Nmax = 1e5 + 9;
struct BT{
    ll a, b;
};
bool cmp(BT x, BT y){
    return x.a < y.a;
}
BT Btap[Nmax];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("practice.inp", "r", stdin);
    freopen("practice.out", "w", stdout);
    ll n,d=0;
    ll c; cin>>n >> c;
    for(int i=1; i<=n; i++){
        cin >> Btap[i].a >> Btap[i].b;
    }
    sort(Btap+1, Btap+n+1, cmp);
    for(int i=1; i<=n; i++){
        if(c >= Btap[i].a){
            c += Btap[i].b;
            d++;
        }
        else break;
    }
    cout << d << endl;
    return 0;
}