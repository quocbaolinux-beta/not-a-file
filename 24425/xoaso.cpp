#include <bits/stdc++.h>
#define file(n) freopen(n".inp", "r", stdin); freopen(n".out", "w", stdout);
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using ll = long long;
ll n, w, s=0;
int main(){
    io;
    file("xoaso");
    cin >> n >> w;
    vector<int>a(n);
    for(int &x:a) cin >> x, s+=x;
    sort(a.rbegin(), a.rend());
    ll cnt=0;
    for (int x:a) {
        if (s <= w) break;
        s -= x;
        cnt++;
    }
    cout << cnt;
    return 0;
}