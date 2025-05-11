#include <bits/stdc++.h>
using namespace std;
const int MAXN=1e6;
bool isprime[MAXN+1];
int demnt[MAXN+1], pref[MAXN+1];
void sieve(){
    for(int i=0; i<=MAXN; i++){
        isprime[i]=true;
    }
    isprime[0]=isprime[1]=false;
    for (int p = 2; p * p <= MAXN; ++p) {
        if (isprime[p]) {
            for (int i = p * p; i <= MAXN; i += p)
                isprime[i] = false;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("cau2.inp", "r", stdin);
    freopen("cau2.out", "w", stdout);
    sieve();
    demnt[0] = 0;
    for (int i = 1; i <= MAXN; ++i) {
        demnt[i] = demnt[i-1];
        if (isprime[i]) {
            demnt[i]++;
        }
    }
    pref[0] = 0;
    for (int i = 1; i <= MAXN; ++i) {
        pref[i] = pref[i-1];
        if (demnt[i] > 0 && isprime[demnt[i]]) {
            pref[i]++;
        }
    }
    int T; 
    cin >> T; 
    while (T--) {
        int L, R;
        cin >> L >> R;
        int result = pref[R] - pref[L-1];
        cout << result << "\n";
    }
    return 0;
}