#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int> 
#define file(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout);

using namespace std;
const int N = 1e5 + 5;
int n, q, a[N], S[N];

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    file("sumquery");
    cin >> n >> q;
    S[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        S[i] = S[i - 1] + a[i];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << S[r] - S[l - 1] << endl;
    }
    return 0;
}