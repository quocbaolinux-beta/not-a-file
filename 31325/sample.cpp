#include <bits/stdc++.h>
#define ll long long
#define str string
#define ii pair <ll,ll>
#define fi first
#define se second

using namespace std;
const ll N = 1e6;

ll n , sum_q2 , cnt_q2 , cnt_q4 , ans_q4;
ll a[N+5] , f[N+5];
vector <ll> q1 , q4;

int main() {
    cin >> n;
    for(ll i = 1; i <= n; i++){
        cin >> a[i];

        if(a[i] > 0 && (a[i] % 10 == 6 || a[i] % 10 == 8)){
            q1.push_back(a[i]);
        }

        if(a[i] > 0 && a[i] % 2 == 1){
            sum_q2 += a[i];
            cnt_q2++;
        }

        if(a[i] % 2 == 0){
            q4.push_back(a[i]);
            cnt_q4++;
        }
    }

    /// Query 1
    for(ll i : q1){
        cout << i << " ";
    }
    cout << "\n";

    /// Query 2
    long double q2 = sum_q2*1.0 / cnt_q2*1.0;
    cout << fixed << setprecision(2) << q2 << "\n";

    /// Query 3
    bool check = 0;
    ll max_len = 1 , cur_len = 1;

    for(ll i = 2; i <= n; i++){
        if(a[i] == a[i-1]){
            cur_len++;
            check = 1;
        }
        else{
            max_len = max(max_len , cur_len);
            cur_len = 1;
        }
    }

    if(!check)  cout << "NO\n";
    else{
        cout << "YES " << max_len << "\n";
    }

    /// Query 4
    
    for(ll i = 0; i < cnt_q4; i++){
        f[i] = 1;
        for(ll j = 0; j < i; j++){
            if(q4[i] > q4[j]){
                f[i] = max(f[i] , f[j] + 1);
            }
        }
        ans_q4 = max(ans_q4 , f[i]);
    }

    cout << ans_q4;

    return 0;
}

