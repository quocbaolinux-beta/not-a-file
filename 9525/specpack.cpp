#include <bits/stdc++.h>
using namespace std;

long long a[1000001], n, i, b[1000001], m, maxt, maxtj, t[1000001], j;

bool isPrime(long long x) {
    if (x < 2) return false;
    for (long long i = 2; i * i <= x; ++i)
        if (x % i == 0) return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SPECPACK.INP", "r", stdin);
    freopen("SPECPACK.OUT", "w", stdout);

    cin >> n;
    for(i = 1; i <= n; i++)
        cin >> a[i];

    m = 0;
    for(i = 1; i <= n; i++)
        if(isPrime(a[i])) {
            m++;
            b[m] = a[i];
        }

    t[1] = 1;
    for(i = 2; i <= m; i++) {
        maxtj = 0;
        for(j = 1; j <= i - 1; j++)
            if((t[j] > maxtj) && (b[j] > b[i]))
                maxtj = t[j];
        t[i] = maxtj + 1;
    }

    maxt = t[1];
    for(i = 2; i <= m; i++)
        maxt = max(maxt, t[i]);

    cout << maxt;
    return 0;
}