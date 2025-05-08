#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
using namespace std;
ll n, dem, tong;
bool cp(ll n){
    ld sqr=sqrtl(n);
    ll rd=round(sqr);
    return rd*rd==n;
}
int demcp(ll x) {
    ll sum = 0;
    int count = 0;
    for (ll i = 1;; ++i) {
        ll sq = i * i;
        if (sum + sq > x) break;
        sum += sq;
        count++;
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("bai4.inp", "r", stdin);
    freopen("bai4.out", "w", stdout);
    cin >> n;
    while(n--){
        ll x;
        cin >> x;
        cout << demcp(x) << " ";
    }
    return 0;
}