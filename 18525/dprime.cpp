#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
bool p[N];
int cnt[N]; 
int pre[N];
void sieve() {
    fill(p, p+N, true);
    p[0]=p[1]=false;
    for (int i=2; i*i<N; ++i)
        if (p[i])
            for (int j=i*i; j<N; j+=i)
                p[j] = false;
    for (int i=1; i<N; ++i)
        cnt[i]=cnt[i-1]+p[i];
    for (int i=1; i<N; ++i)
        pre[i]=pre[i-1]+(p[cnt[i]] ? 1 : 0);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    freopen("DPRIME.INP", "r", stdin);
    freopen("DPRIME.OUT", "w", stdout);
    sieve();
    int t, l, r;
    cin >> t;
    while (t--) {
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << '\n';
    }
}
